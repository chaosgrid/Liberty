#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_622aa30);

#define public_622aa53 _public_622aa53
#define public_622aa85 _public_622aa85
#define public_622aa8d _public_622aa8d
#define public_622aaa5 _public_622aaa5
#define public_622aad7 _public_622aad7
#define public_622aae9 _public_622aae9
#define public_622aaf5 _public_622aaf5
#define public_622aafa _public_622aafa
#define public_622ab2b _public_622ab2b

PROC_DECLARE(0x622aa30, internal_622aa30, public_622aa30);
extern "C" NAKED register_t __cdecl internal_622aa30()
{
    __asm
    {
        sub esp, 0x12C
        mov eax, dword ptr ss : [esp+0x130]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x140]
        push edi
        lea ebx, ds:[eax+4]
        mov dword ptr ss : [esp+0x10], 0
        public_622aa53 : nop
        mov ecx, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [ecx+0xC]
        mov ebp, dword ptr ds : [ebx+0xC]
        lea edx, ss:[esp+0x14]
        mov edi, eax
        push edx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x18], edi
        call public_622a4f0
        mov ecx, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_622aa85
        cmp edi, dword ptr ds : [eax+0xC]
        jb public_622aa85
        lea eax, ss:[esp+0x14]
        jmp public_622aa8d
        public_622aa85 : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_622aa8d : nop
        cmp dword ptr ds : [eax], ebp
        je public_622ab2b
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_622aafa
        lea edx, ss:[esp+0x3C]
        mov eax, esi
        sub edx, esi
        public_622aaa5 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_622aaa5
        mov edi, dword ptr ds : [public_624b068]
        lea eax, ss:[esp+0x3C]
        push 0x23
        push eax
        call edi
        add esp, 8
        test eax, eax
        je public_622aad7
        mov byte ptr ds : [eax], 0
        inc eax
        push eax
        call dword ptr ds : [public_624b050]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        public_622aad7 : nop
        push 0x2E
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_622aaf5
        lea edx, ss:[esp+0x1C]
        sub edx, eax
        public_622aae9 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_622aae9
        jmp public_622aafa
        public_622aaf5 : nop
        mov byte ptr ss : [esp+0x1C], 0
        public_622aafa : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x1C]
        inc eax
        push ecx
        lea edx, ss:[esp+0x40]
        push eax
        push edx
/*FIXUP push offset public_6256188 @0x622ab0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256188
/*FIXUP push offset public_6257d80 @0x622ab0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257d80
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_624b064]
        add esp, 0x14
        mov esi, offset public_6257d80
        jmp public_622aa53
        public_622ab2b : nop
        mov eax, dword ptr ss : [esp+0x148]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x12C
        ret 0xC
        UNREACHABLE_TRAP(0x622aa30)
    }
}

#undef public_622aa53
#undef public_622aa85
#undef public_622aa8d
#undef public_622aaa5
#undef public_622aad7
#undef public_622aae9
#undef public_622aaf5
#undef public_622aafa
#undef public_622ab2b
