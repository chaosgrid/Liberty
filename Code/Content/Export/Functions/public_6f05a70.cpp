#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f05acd _public_6f05acd
#define public_6f05ae3 _public_6f05ae3
#define public_6f05afc _public_6f05afc
#define public_6f05afe _public_6f05afe
#define public_6f05b3c _public_6f05b3c
#define public_6f05b50 _public_6f05b50
#define public_6f05b80 _public_6f05b80

PROC_DECLARE(0x6f05a70, internal_6f05a70, public_6f05a70);
extern "C" NAKED register_t __cdecl internal_6f05a70()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fcomp dword ptr ds : [public_6fb444c]
        push ebp
        push esi
        mov ebp, ecx
        fnstsw ax
        test ah, 0x41
        jp public_6f05acd
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3150]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6f05b80
        mov byte ptr ds : [esi+0x18], 1
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+4]
        pop esi
        pop ebp
        add esp, 8
        ret 0x14
        public_6f05acd : nop
        call public_6efec10
        fadd dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        fstp dword ptr ss : [esp+8]
        je public_6f05afe
        public_6f05ae3 : nop
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x14]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        je public_6f05afc
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6f05ae3
        jmp public_6f05afe
        public_6f05afc : nop
        mov esi, ecx
        public_6f05afe : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6fb3150]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f05b3c
        mov edi, eax
        public_6f05b3c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f05b50
        mov dword ptr ds : [eax], ebx
        public_6f05b50 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        inc edi
        mov dword ptr ss : [ebp+0xC], edi
        mov edx, dword ptr ss : [ebp+0x10]
        push ecx
/*FIXUP push offset public_6fd1c74 @0x6f05b64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        pop ebx
        public_6f05b80 : nop
        pop esi
        pop ebp
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6f05a70)
    }
}

#undef public_6f05acd
#undef public_6f05ae3
#undef public_6f05afc
#undef public_6f05afe
#undef public_6f05b3c
#undef public_6f05b50
#undef public_6f05b80
