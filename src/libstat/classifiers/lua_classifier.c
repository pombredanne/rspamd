/*-
 * Copyright 2016 Vsevolod Stakhov
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "classifiers.h"
#include "cfg_file.h"
#include "stat_internal.h"

gboolean
lua_classifier_init (rspamd_mempool_t *pool,
		struct rspamd_classifier *cl)
{
	cl->cfg->flags |= RSPAMD_FLAG_CLASSIFIER_NO_BACKEND;

	return TRUE;
}
gboolean
lua_classifier_classify (struct rspamd_classifier *ctx,
		GPtrArray *tokens,
		struct rspamd_task *task)
{
	return TRUE;
}

gboolean
lua_classifier_learn_spam (struct rspamd_classifier *ctx,
		GPtrArray *tokens,
		struct rspamd_task *task,
		gboolean is_spam,
		gboolean unlearn,
		GError **err)
{
	return TRUE;
}
