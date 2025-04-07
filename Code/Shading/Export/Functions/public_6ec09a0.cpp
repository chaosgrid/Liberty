#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec09a0);

#define public_6ec09b0 _public_6ec09b0
#define public_6ec09d3 _public_6ec09d3
#define public_6ec09f2 _public_6ec09f2
#define public_6ec0a65 _public_6ec0a65
#define public_6ec0a8a _public_6ec0a8a
#define public_6ec0aa9 _public_6ec0aa9
#define public_6ec0ac4 _public_6ec0ac4
#define public_6ec0adc _public_6ec0adc
#define public_6ec0b42 _public_6ec0b42
#define public_6ec0b51 _public_6ec0b51
#define public_6ec0b57 _public_6ec0b57
#define public_6ec0b64 _public_6ec0b64
#define public_6ec0b76 _public_6ec0b76

PROC_DECLARE(0x6ec09a0, internal_6ec09a0, public_6ec09a0);
extern "C" NAKED register_t __cdecl internal_6ec09a0()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        test ebp, ebp
        jne public_6ec09b0
        lea ebp, ss:[esp+0x44]
        public_6ec09b0 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        push ebx
        mov dword ptr ss : [esp+0x58], 0
        je public_6ec09d3
        mov dword ptr ss : [esp+0x58], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jne public_6ec09f2
        public_6ec09d3 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6ed48b4 @0x6ec09de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6ec0b64
        mov eax, dword ptr ss : [esp+0x58]
        public_6ec09f2 : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push 3
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_6ec0b64
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push 0x400
/*FIXUP push offset public_6ed5860 @0x6ec0a21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6ec0b57
        mov ecx, 9
        mov esi, offset public_6ed4bb4
        lea edi, ss:[esp+0x20]
        rep movsd
        lea eax, ss:[esp+0x20]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_6ed1050]
/*FIXUP push offset public_6ed5860 @0x6ec0a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call edi
        add esp, 8
        test eax, eax
        je public_6ec0a65
        mov byte ptr ds : [eax+public_6ed5860], 0
        public_6ec0a65 : nop
        mov esi, dword ptr ds : [public_6ed100c]
/*FIXUP push offset public_6ed4bac @0x6ec0a6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bac
/*FIXUP push offset public_6ed5860 @0x6ec0a70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0a8a
        mov dword ptr ss : [ebp], 1
        jmp public_6ec0b57
/*FIXUP public_6ec0a8a : nop
        push offset public_6ed4ba8 @0x6ec0a8a*/
  FIXUP public_6ec0a8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba8
/*FIXUP push offset public_6ed5860 @0x6ec0a8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0aa9
        mov dword ptr ss : [ebp], 1
        jmp public_6ec0b57
/*FIXUP public_6ec0aa9 : nop
        push offset public_6ed4ba0 @0x6ec0aa9*/
  FIXUP public_6ec0aa9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba0
/*FIXUP push offset public_6ed5860 @0x6ec0aae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0ac4
        mov dword ptr ss : [ebp], eax
        jmp public_6ec0b57
/*FIXUP public_6ec0ac4 : nop
        push offset public_6ed4b9c @0x6ec0ac4*/
  FIXUP public_6ec0ac4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b9c
/*FIXUP push offset public_6ed5860 @0x6ec0ac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0adc
        mov dword ptr ss : [ebp], eax
        jmp public_6ec0b57
        public_6ec0adc : nop
        mov esi, dword ptr ds : [public_6ed1048]
        push 0x78
/*FIXUP push offset public_6ed5860 @0x6ec0ae4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0b42
        push 0x58
/*FIXUP push offset public_6ed5860 @0x6ec0af4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0b42
        mov edx, dword ptr ds : [public_6ed4b90]
        mov ecx, dword ptr ds : [public_6ed4b8c]
        mov eax, dword ptr ds : [public_6ed4b94]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ds : [public_6ed4b98]
        push edx
/*FIXUP push offset public_6ed5860 @0x6ec0b26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], cl
        call edi
/*FIXUP push offset public_6ed5860 @0x6ec0b35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed1040]
        jmp public_6ec0b51
        public_6ec0b42 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6ed5860 @0x6ec0b46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed104c]
        public_6ec0b51 : nop
        add esp, 0xC
        mov dword ptr ss : [ebp], eax
        public_6ec0b57 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        pop edi
        pop esi
        public_6ec0b64 : nop
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        mov ebp, dword ptr ss : [ebp]
        pop ebx
        je public_6ec0b76
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec0b76 : nop
        mov eax, ebp
        pop ebp
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6ec09a0)
    }
}

#undef public_6ec09b0
#undef public_6ec09d3
#undef public_6ec09f2
#undef public_6ec0a65
#undef public_6ec0a8a
#undef public_6ec0aa9
#undef public_6ec0ac4
#undef public_6ec0adc
#undef public_6ec0b42
#undef public_6ec0b51
#undef public_6ec0b57
#undef public_6ec0b64
#undef public_6ec0b76
