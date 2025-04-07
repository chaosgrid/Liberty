#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa1170);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa118e _public_6fa118e
#define public_6fa11a8 _public_6fa11a8

PROC_DECLARE(0x6fa1170, internal_6fa1170, public_6fa1170);
extern "C" NAKED register_t __cdecl internal_6fa1170()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov ebp, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6fa118e
        mov edi, eax
        public_6fa118e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6fa11a8
        mov edx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [edx]
        mov byte ptr ds : [ecx], dl
        public_6fa11a8 : nop
        inc dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6fa1170)
    }
}

#undef public_6fa118e
#undef public_6fa11a8
