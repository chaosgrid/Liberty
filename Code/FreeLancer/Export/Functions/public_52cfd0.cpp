#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_4f8110);
CLANG_FORWARD_PROC_SYMBOL(public_52cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_5377a0);
CLANG_FORWARD_PROC_SYMBOL(public_537960);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_537af0);
CLANG_FORWARD_PROC_SYMBOL(public_538e80);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

#define public_52cfec _public_52cfec
#define public_52d04b _public_52d04b
#define public_52d080 _public_52d080
#define public_52d082 _public_52d082
#define public_52d12b _public_52d12b
#define public_52d140 _public_52d140
#define public_52d178 _public_52d178
#define public_52d1a1 _public_52d1a1
#define public_52d1d7 _public_52d1d7
#define public_52d214 _public_52d214
#define public_52d216 _public_52d216
#define public_52d271 _public_52d271

PROC_DECLARE(0x52cfd0, internal_52cfd0, public_52cfd0);
extern "C" NAKED register_t __cdecl internal_52cfd0()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        xor ebp, ebp
        test ecx, ecx
        push edi
        je public_52cfec
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_52cfec
        mov ebp, dword ptr ds : [eax+4]
        public_52cfec : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c68b8]
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_52d271
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        test al, al
        jne public_52d271
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ecx, 0xFFFFFFFF
        je public_52d04b
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        call dword ptr ds : [public_5c68b4]
        add esp, 4
        public_52d04b : nop
        call public_54bc80
        test al, al
        je public_52d1a1
        call public_54baf0
        test eax, eax
        je public_52d080
        add eax, 0xC
        test eax, eax
        je public_52d080
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52d080
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_52d082
        public_52d080 : nop
        xor eax, eax
        public_52d082 : nop
        mov edx, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_52d1a1
        mov eax, dword ptr ss : [ebp+0x5C]
        test eax, eax
        je public_52d271
        lea esi, ss:[ebp+0x60]
        push esi
        call public_538e80
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52d178
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        mov al, 0xFF
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], al
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [ebp+0x58]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], edx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_537af0
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_52d140
        mov ebx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        push eax
        mov ecx, esi
        call public_5377a0
        push 0
        push 0x3F800000
        push 0x3F800000
        push edi
        mov ecx, esi
        call public_537960
        test al, al
        jne public_52d12b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        public_52d12b : nop
        mov ecx, esi
        call public_537ad0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        lea ebx, ds:[ebx]
        public_52d140 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ds:[eax+8]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x13B
/*FIXUP push offset public_5dd484 @0x52d160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd484
/*FIXUP push offset public_5dd520 @0x52d165*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd520
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        public_52d178 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x140
/*FIXUP push offset public_5dd484 @0x52d184*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd484
        mov eax, 0x100002
/*FIXUP push offset public_5dd4e4 @0x52d18e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd4e4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        public_52d1a1 : nop
        lea esi, ss:[ebp+0x54]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52d271
        mov ecx, dword ptr ds : [ebx+0x28]
        test ecx, ecx
        je public_52d1d7
        call public_4f8110
        mov ecx, dword ptr ds : [ebx+0x28]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+0x28]
        call public_4f7a90
        mov dword ptr ds : [ebx+0x28], 0
        public_52d1d7 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push 0
        call dword ptr ds : [public_5c68b0]
        mov ebp, eax
        cmp dword ptr ss : [ebp], 0xFFFFFFFF
        je public_52d271
        push esi
        call public_40f080
        push 0x84
        mov dword ptr ss : [esp+0x18], eax
        call public_4f79a0
        add esp, 8
        test eax, eax
        je public_52d214
        push 0
        mov ecx, eax
        call public_4f8060
        jmp public_52d216
        public_52d214 : nop
        xor eax, eax
        public_52d216 : nop
        mov dword ptr ds : [ebx+0x28], eax
        lea esi, ss:[ebp+4]
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[ebp+0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [ebx+8]
        push ecx
        push edx
        mov ecx, eax
        call public_4f7d20
        mov ecx, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        test al, al
        jne public_52d271
        mov ecx, dword ptr ds : [ebx+0x28]
        call public_4f7a90
        mov dword ptr ds : [ebx+0x28], 0
        public_52d271 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x52cfd0)
    }
}

#undef public_52cfec
#undef public_52d04b
#undef public_52d080
#undef public_52d082
#undef public_52d12b
#undef public_52d140
#undef public_52d178
#undef public_52d1a1
#undef public_52d1d7
#undef public_52d214
#undef public_52d216
#undef public_52d271
