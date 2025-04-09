#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_41ad30);
CLANG_FORWARD_PROC_SYMBOL(public_41ade0);
CLANG_FORWARD_PROC_SYMBOL(public_41b590);
CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_41bd40);
CLANG_FORWARD_PROC_SYMBOL(public_41bde0);

#define public_41ae39 _public_41ae39
#define public_41ae4d _public_41ae4d
#define public_41ae63 _public_41ae63
#define public_41aee7 _public_41aee7
#define public_41aeee _public_41aeee
#define public_41af2b _public_41af2b

PROC_DECLARE(0x41ade0, internal_41ade0, public_41ade0);
extern "C" NAKED register_t __cdecl internal_41ade0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        call public_41a9a0
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 8
        test al, al
        je public_41aeee
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        push ebx
        push edx
        push edi
        mov ecx, esi
        call public_41ad30
        mov bl, al
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        or ebp, 0xFFFFFFFF
        test eax, eax
        je public_41ae39
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+8]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ebp, eax
        public_41ae39 : nop
        mov eax, dword ptr ds : [public_5c6d7c]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_41ae4d
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0x10], eax
        public_41ae4d : nop
        mov eax, dword ptr ds : [public_5c6d84]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_41ae63
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push edi
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], eax
        public_41ae63 : nop
        test bl, bl
        pop ebx
        jne public_41aeee
        test ebp, ebp
        jge public_41aeee
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_41aeee
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_41aeee
/*FIXUP push offset public_6166ec @0x41ae7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6166d8
        call public_41bd40
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, offset public_6166d8
        mov edi, eax
        call public_41bd10
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        push esi
        call public_41bde0
        add esp, 0x10
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6166d8
        call public_41b590
/*FIXUP push offset public_6166ec @0x41aedc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        public_41aee7 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret 
        public_41aeee : nop
        test esi, esi
        je public_41aee7
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_41af2b
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, 0xFFFFFFFF
        je public_41af2b
        mov edx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0x3F800000
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_41af2b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x41ade0)
    }
}

#undef public_41ae39
#undef public_41ae4d
#undef public_41ae63
#undef public_41aee7
#undef public_41aeee
#undef public_41af2b
