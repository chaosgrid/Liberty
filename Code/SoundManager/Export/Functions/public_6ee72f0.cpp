#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee72f0);

#define public_6ee7300 _public_6ee7300
#define public_6ee7323 _public_6ee7323
#define public_6ee7342 _public_6ee7342
#define public_6ee73b5 _public_6ee73b5
#define public_6ee73da _public_6ee73da
#define public_6ee73f9 _public_6ee73f9
#define public_6ee7414 _public_6ee7414
#define public_6ee742c _public_6ee742c
#define public_6ee7492 _public_6ee7492
#define public_6ee74a1 _public_6ee74a1
#define public_6ee74a7 _public_6ee74a7
#define public_6ee74b4 _public_6ee74b4
#define public_6ee74c6 _public_6ee74c6

PROC_DECLARE(0x6ee72f0, internal_6ee72f0, public_6ee72f0);
extern "C" NAKED register_t __cdecl internal_6ee72f0()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        test ebp, ebp
        jne public_6ee7300
        lea ebp, ss:[esp+0x44]
        public_6ee7300 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        push ebx
        mov dword ptr ss : [esp+0x58], 0
        je public_6ee7323
        mov dword ptr ss : [esp+0x58], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jne public_6ee7342
        public_6ee7323 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6eea468 @0x6ee732e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea468
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6ee74b4
        mov eax, dword ptr ss : [esp+0x58]
        public_6ee7342 : nop
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
        je public_6ee74b4
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push 0x400
/*FIXUP push offset public_6eeafa0 @0x6ee7371*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6ee74a7
        mov ecx, 9
        mov esi, offset public_6eea428
        lea edi, ss:[esp+0x20]
        rep movsd
        lea eax, ss:[esp+0x20]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_6ee90a8]
/*FIXUP push offset public_6eeafa0 @0x6ee73a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call edi
        add esp, 8
        test eax, eax
        je public_6ee73b5
        mov byte ptr ds : [eax+public_6eeafa0], 0
        public_6ee73b5 : nop
        mov esi, dword ptr ds : [public_6ee9000]
/*FIXUP push offset public_6eea420 @0x6ee73bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea420
/*FIXUP push offset public_6eeafa0 @0x6ee73c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee73da
        mov dword ptr ss : [ebp], 1
        jmp public_6ee74a7
/*FIXUP public_6ee73da : nop
        push offset public_6eea41c @0x6ee73da*/
  FIXUP public_6ee73da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea41c
/*FIXUP push offset public_6eeafa0 @0x6ee73df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee73f9
        mov dword ptr ss : [ebp], 1
        jmp public_6ee74a7
/*FIXUP public_6ee73f9 : nop
        push offset public_6eea414 @0x6ee73f9*/
  FIXUP public_6ee73f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea414
/*FIXUP push offset public_6eeafa0 @0x6ee73fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee7414
        mov dword ptr ss : [ebp], eax
        jmp public_6ee74a7
/*FIXUP public_6ee7414 : nop
        push offset public_6eea410 @0x6ee7414*/
  FIXUP public_6ee7414 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea410
/*FIXUP push offset public_6eeafa0 @0x6ee7419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee742c
        mov dword ptr ss : [ebp], eax
        jmp public_6ee74a7
        public_6ee742c : nop
        mov esi, dword ptr ds : [public_6ee9078]
        push 0x78
/*FIXUP push offset public_6eeafa0 @0x6ee7434*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee7492
        push 0x58
/*FIXUP push offset public_6eeafa0 @0x6ee7444*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call esi
        add esp, 8
        test eax, eax
        jne public_6ee7492
        mov edx, dword ptr ds : [public_6eea404]
        mov ecx, dword ptr ds : [public_6eea400]
        mov eax, dword ptr ds : [public_6eea408]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ds : [public_6eea40c]
        push edx
/*FIXUP push offset public_6eeafa0 @0x6ee7476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], cl
        call edi
/*FIXUP push offset public_6eeafa0 @0x6ee7485*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call dword ptr ds : [public_6ee9074]
        jmp public_6ee74a1
        public_6ee7492 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6eeafa0 @0x6ee7496*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeafa0
        call dword ptr ds : [public_6ee909c]
        public_6ee74a1 : nop
        add esp, 0xC
        mov dword ptr ss : [ebp], eax
        public_6ee74a7 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        pop edi
        pop esi
        public_6ee74b4 : nop
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        mov ebp, dword ptr ss : [ebp]
        pop ebx
        je public_6ee74c6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ee74c6 : nop
        mov eax, ebp
        pop ebp
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6ee72f0)
    }
}

#undef public_6ee7300
#undef public_6ee7323
#undef public_6ee7342
#undef public_6ee73b5
#undef public_6ee73da
#undef public_6ee73f9
#undef public_6ee7414
#undef public_6ee742c
#undef public_6ee7492
#undef public_6ee74a1
#undef public_6ee74a7
#undef public_6ee74b4
#undef public_6ee74c6
