#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fc10);

#define public_57fc24 _public_57fc24
#define public_57fc43 _public_57fc43
#define public_57fc5e _public_57fc5e

PROC_DECLARE(0x57fc10, internal_57fc10, public_57fc10);
extern "C" NAKED register_t __cdecl internal_57fc10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp edx, esi
        je public_57fc5e
        push ebx
        push ebp
        push edi
        public_57fc24 : nop
        mov ecx, dword ptr ds : [esi-0xC]
        sub esi, 0xC
        sub eax, 0xC
        mov dword ptr ds : [eax], ecx
        mov cx, word ptr ds : [esi]
        mov edi, esi
        mov ebp, 0xFFFFFFFE
        mov word ptr ds : [eax], cx
        sub edi, eax
        lea ecx, ds:[eax+2]
        sub ebp, eax
        public_57fc43 : nop
        mov bl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [ecx], bl
        inc ecx
        lea ebx, ds:[ecx+ebp]
        cmp ebx, 2
        jb public_57fc43
        cmp esi, edx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        jne public_57fc24
        pop edi
        pop ebp
        pop ebx
        public_57fc5e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x57fc10)
    }
}

#undef public_57fc24
#undef public_57fc43
#undef public_57fc5e
