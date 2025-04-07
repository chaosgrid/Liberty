#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65df1f7);

#define public_65df207 _public_65df207
#define public_65df214 _public_65df214
#define public_65df21f _public_65df21f

PROC_DECLARE(0x65df1f7, internal_65df1f7, public_65df1f7);
extern "C" NAKED register_t __cdecl internal_65df1f7()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        lea ecx, ds:[edx-1]
        je public_65df214
        public_65df207 : nop
        cmp byte ptr ds : [eax], 0
        je public_65df214
        inc eax
        mov esi, ecx
        dec ecx
        test esi, esi
        jne public_65df207
        public_65df214 : nop
        cmp byte ptr ds : [eax], 0
        pop esi
        jne public_65df21f
        sub eax, dword ptr ss : [esp+4]
        ret 
        public_65df21f : nop
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x65df1f7)
    }
}

#undef public_65df207
#undef public_65df214
#undef public_65df21f
