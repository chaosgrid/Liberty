#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16930);

#define public_6d16944 _public_6d16944
#define public_6d1696c _public_6d1696c
#define public_6d16984 _public_6d16984
#define public_6d169a6 _public_6d169a6
#define public_6d16a34 _public_6d16a34
#define public_6d16a59 _public_6d16a59
#define public_6d16a7e _public_6d16a7e
#define public_6d16aa3 _public_6d16aa3
#define public_6d16ac8 _public_6d16ac8
#define public_6d16af0 _public_6d16af0
#define public_6d16b09 _public_6d16b09
#define public_6d16b50 _public_6d16b50
#define public_6d16b66 _public_6d16b66
#define public_6d16b87 _public_6d16b87

PROC_DECLARE(0x6d16930, internal_6d16930, public_6d16930);
extern "C" NAKED register_t __cdecl internal_6d16930()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        push esi
        push edi
        cmp dword ptr ss : [ebp+0x1C], 0
        jne public_6d16944
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp+0x1C], eax
        public_6d16944 : nop
        mov dword ptr ss : [ebp-4], 0
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ss : [ebp+0xC]
        je public_6d16984
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1696c
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d1696c : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], edx
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d16984
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        public_6d16984 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d169a6
        lea eax, ss:[ebp-4]
        push eax
/*FIXUP push offset public_6d6af68 @0x6d1698e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af68
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6d16b66
        public_6d169a6 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], edx
        push 3
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x50], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        call dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d16b66
        push 0x400
/*FIXUP push offset public_6d739a0 @0x6d169d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x54]
        push ecx
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6d16b50
        mov ecx, 9
        mov esi, offset public_6d6af40
        lea edi, ss:[ebp-0x34]
        rep movsd
        movsb 
        lea edx, ss:[ebp-0x34]
        push edx
/*FIXUP push offset public_6d739a0 @0x6d16a13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e15c]
        add esp, 8
        mov dword ptr ss : [ebp-0x38], eax
        cmp dword ptr ss : [ebp-0x38], 0
        je public_6d16a34
        mov eax, dword ptr ss : [ebp-0x38]
        mov byte ptr ds : [eax+public_6d739a0], 0
/*FIXUP public_6d16a34 : nop
        push offset public_6d6af38 @0x6d16a34*/
  FIXUP public_6d16a34 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af38
/*FIXUP push offset public_6d739a0 @0x6d16a39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d16a59
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx], 1
        jmp public_6d16b50
/*FIXUP public_6d16a59 : nop
        push offset public_6d6af34 @0x6d16a59*/
  FIXUP public_6d16a59 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af34
/*FIXUP push offset public_6d739a0 @0x6d16a5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d16a7e
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edx], 1
        jmp public_6d16b50
/*FIXUP public_6d16a7e : nop
        push offset public_6d6af2c @0x6d16a7e*/
  FIXUP public_6d16a7e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af2c
/*FIXUP push offset public_6d739a0 @0x6d16a83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d16aa3
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax], 0
        jmp public_6d16b50
/*FIXUP public_6d16aa3 : nop
        push offset public_6d6af28 @0x6d16aa3*/
  FIXUP public_6d16aa3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af28
/*FIXUP push offset public_6d739a0 @0x6d16aa8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d16ac8
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx], 0
        jmp public_6d16b50
        public_6d16ac8 : nop
        push 0x78
/*FIXUP push offset public_6d739a0 @0x6d16aca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e0d0]
        add esp, 8
        test eax, eax
        jne public_6d16af0
        push 0x58
/*FIXUP push offset public_6d739a0 @0x6d16ade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e0d0]
        add esp, 8
        test eax, eax
        je public_6d16b09
        public_6d16af0 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6d739a0 @0x6d16af4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e118]
        add esp, 0xC
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edx], eax
        jmp public_6d16b50
        public_6d16b09 : nop
        mov eax, dword ptr ds : [public_6d6af18]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ds : [public_6d6af1c]
        mov dword ptr ss : [ebp-0x44], ecx
        mov edx, dword ptr ds : [public_6d6af20]
        mov dword ptr ss : [ebp-0x40], edx
        mov al, byte ptr ds : [public_6d6af24]
        mov byte ptr ss : [ebp-0x3C], al
        lea ecx, ss:[ebp-0x48]
        push ecx
/*FIXUP push offset public_6d739a0 @0x6d16b2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e15c]
        add esp, 8
/*FIXUP push offset public_6d739a0 @0x6d16b3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d739a0
        call dword ptr ds : [public_6d5e0d8]
        add esp, 4
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx], eax
        public_6d16b50 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x58]
        push eax
        call dword ptr ds : [edx+0x18]
        public_6d16b66 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x4C], edx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d16b87
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d16b87 : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d16930)
    }
}

#undef public_6d16944
#undef public_6d1696c
#undef public_6d16984
#undef public_6d169a6
#undef public_6d16a34
#undef public_6d16a59
#undef public_6d16a7e
#undef public_6d16aa3
#undef public_6d16ac8
#undef public_6d16af0
#undef public_6d16b09
#undef public_6d16b50
#undef public_6d16b66
#undef public_6d16b87
