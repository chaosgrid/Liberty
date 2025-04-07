#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f250);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2f271 _public_6c2f271
#define public_6c2f294 _public_6c2f294

PROC_DECLARE(0x6c2f250, internal_6c2f250, public_6c2f250);
extern "C" NAKED register_t __cdecl internal_6c2f250()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov ebp, ecx
        call public_6c34eac
        add esp, 4
        test ebx, ebx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        jne public_6c2f271
        mov ebx, esi
        public_6c2f271 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [edi+4], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], esi
        lea eax, ds:[esi+8]
        test eax, eax
        je public_6c2f294
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov dword ptr ds : [eax], ecx
        je public_6c2f294
        call public_6c2dfe0
        public_6c2f294 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c2f250)
    }
}

#undef public_6c2f271
#undef public_6c2f294
