#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_435c90);
CLANG_FORWARD_PROC_SYMBOL(public_445340);
CLANG_FORWARD_PROC_SYMBOL(public_453a40);
CLANG_FORWARD_PROC_SYMBOL(public_454e80);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_456540);

#define public_44541d _public_44541d
#define public_445490 _public_445490
#define public_4454b4 _public_4454b4
#define public_4454c3 _public_4454c3

PROC_DECLARE(0x445340, internal_445340, public_445340);
extern "C" NAKED register_t __cdecl internal_445340()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xE4]
        push edi
        xor ebx, ebx
        cmp esi, ebx
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        je public_4454c3
        cmp byte ptr ds : [esi], bl
        je public_4454c3
        mov eax, dword ptr ds : [edi+8]
        push ebp
        push ebx
        push eax
        mov ecx, offset public_66d2d0
        call public_456540
        mov ebp, eax
        cmp ebp, ebx
        je public_445490
        push esi
        call dword ptr ds : [public_5c61e0]
        mov esi, eax
        push ebx
        lea ecx, ss:[esp+0x60]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x34], esi
        call dword ptr ds : [public_5c61dc]
        mov ecx, ebx
        mov edx, ebx
        mov eax, ebx
        mov dword ptr ss : [esp+0x40], ecx
        add esp, 0x10
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_4215b0
        mov eax, dword ptr ds : [edi+0x1B8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ebx
        je public_44541d
        lea esi, ds:[eax+4]
        mov ecx, 0xC
        lea edi, ss:[esp+0x88]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
        call public_435c90
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x34]
        rep movsd
        mov esi, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        public_44541d : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        push esi
        lea eax, ss:[esp+0x2C]
        push eax
        push ebx
        push ecx
        mov ecx, ebp
        call public_454eb0
        push ebx
        push edi
        lea ecx, ss:[ebp+0x114]
        call public_453a40
        mov dl, byte ptr ss : [esp+0xF0]
        mov eax, 1
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [ebp+5], al
        mov byte ptr ss : [ebp+4], al
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov byte ptr ss : [ebp+6], bl
        mov byte ptr ss : [ebp+8], dl
        mov byte ptr ss : [ebp+9], bl
        mov byte ptr ss : [ebp+0xF], bl
        mov dword ptr ss : [ebp+0x10], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], ebx
        je public_4454b4
        push eax
        mov ecx, ebp
        call public_454e80
        mov eax, ebp
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xD8
        ret 8
        lea esp, ss:[esp]
/*FIXUP public_445490 : nop
        push offset public_5cba1c @0x445490*/
  FIXUP public_445490 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba1c
        push 0x453
/*FIXUP push offset public_5cb964 @0x44549a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb964
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4454a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4454b4 : nop
        mov eax, ebp
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xD8
        ret 8
        public_4454c3 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xD8
        ret 8
        UNREACHABLE_TRAP(0x445340)
    }
}

#undef public_44541d
#undef public_445490
#undef public_4454b4
#undef public_4454c3
