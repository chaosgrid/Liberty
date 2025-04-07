#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_63846c0);

#define public_63846d8 _public_63846d8
#define public_63846df _public_63846df
#define public_638470e _public_638470e

PROC_DECLARE(0x63846c0, internal_63846c0, public_63846c0);
extern "C" NAKED register_t __cdecl internal_63846c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        jle public_638470e
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        public_63846d8 : nop
        mov dword ptr ds : [ebx], esi
        add ebx, 4
        mov edi, ebp
        public_63846df : nop
        call public_6384610
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        add esi, 8
        dec edi
        fmul qword ptr ds : [public_63a5a48]
        fsub qword ptr ds : [public_63a5940]
        fstp qword ptr ds : [esi-8]
        jne public_63846df
        dec dword ptr ss : [esp+0x14]
        jne public_63846d8
        pop edi
        mov dword ptr ds : [ebx], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_638470e : nop
        mov dword ptr ds : [ebx], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63846c0)
    }
}

#undef public_63846d8
#undef public_63846df
#undef public_638470e
