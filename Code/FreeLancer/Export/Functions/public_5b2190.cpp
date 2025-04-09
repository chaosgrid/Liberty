#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401380);
CLANG_FORWARD_PROC_SYMBOL(public_40ef30);
CLANG_FORWARD_PROC_SYMBOL(public_4174a0);
CLANG_FORWARD_PROC_SYMBOL(public_419e50);
CLANG_FORWARD_PROC_SYMBOL(public_41b150);
CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_4284f0);
CLANG_FORWARD_PROC_SYMBOL(public_42b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_431850);
CLANG_FORWARD_PROC_SYMBOL(public_435500);
CLANG_FORWARD_PROC_SYMBOL(public_437420);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_43d560);
CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_469b30);
CLANG_FORWARD_PROC_SYMBOL(public_4b6580);
CLANG_FORWARD_PROC_SYMBOL(public_4f7140);
CLANG_FORWARD_PROC_SYMBOL(public_4f73b0);
CLANG_FORWARD_PROC_SYMBOL(public_530fa0);
CLANG_FORWARD_PROC_SYMBOL(public_54bd30);
CLANG_FORWARD_PROC_SYMBOL(public_559d20);
CLANG_FORWARD_PROC_SYMBOL(public_5641d0);
CLANG_FORWARD_PROC_SYMBOL(public_564540);
CLANG_FORWARD_PROC_SYMBOL(public_575430);
CLANG_FORWARD_PROC_SYMBOL(public_5791c0);
CLANG_FORWARD_PROC_SYMBOL(public_595400);
CLANG_FORWARD_PROC_SYMBOL(public_59d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5a9300);
CLANG_FORWARD_PROC_SYMBOL(public_5abc60);
CLANG_FORWARD_PROC_SYMBOL(public_5b2190);
CLANG_FORWARD_PROC_SYMBOL(public_5b4050);
CLANG_FORWARD_PROC_SYMBOL(public_5b73c8);
CLANG_FORWARD_PROC_SYMBOL(public_5b73ce);

#define public_5b21b9 _public_5b21b9
#define public_5b2226 _public_5b2226
#define public_5b2250 _public_5b2250
#define public_5b2262 _public_5b2262
#define public_5b2271 _public_5b2271
#define public_5b22f6 _public_5b22f6

PROC_DECLARE(0x5b2190, internal_5b2190, public_5b2190);
extern "C" NAKED register_t __cdecl internal_5b2190()
{
    __asm
    {
        call public_5b73ce
        call public_5791c0
        call dword ptr ds : [public_5c6cd4]
        mov ecx, dword ptr ds : [public_67ecac]
        test ecx, ecx
        je public_5b21b9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        mov dword ptr ds : [public_67ecac], 0
        public_5b21b9 : nop
        call public_5a8260
        mov ecx, offset public_67e7b8
        call public_5a9300
        mov ecx, offset public_67e7b8
        call public_5abc60
        call public_575430
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x24]
        call public_437420
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x24]
        call public_54bd30
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x24]
        call public_43d560
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x24]
        call public_435500
        mov ecx, dword ptr ds : [public_67244c]
        test ecx, ecx
        je public_5b2226
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_67244c]
        test ecx, ecx
        je public_5b2226
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_5b2226 : nop
        push esi
        push edi
        call public_4b6580
        call public_469b30
        call public_45a140
        call public_559d20
        mov eax, dword ptr ds : [public_67ecb4]
        test eax, eax
        je public_5b2271
        mov edi, eax
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_5b2262
        mov edi, edi
        public_5b2250 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_5b2250
        public_5b2262 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_5b2271 : nop
        call public_59d6d0
        call public_564540
        call public_4284f0
        call dword ptr ds : [public_5c6cd0]
        call public_419e50
        call public_4f7140
        call public_4f73b0
        call public_595400
        call public_4174a0
        call dword ptr ds : [public_5c6cb0]
        call public_530fa0
        call public_40ef30
        call public_431850
        call public_42b4d0
        push 0
        call public_4247c0
        add esp, 4
        call public_5b4050
        mov edi, dword ptr ds : [public_5c6ccc]
        call edi
        test eax, eax
        je public_5b22f6
        mov esi, 0x100002
        call edi
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x4BE
/*FIXUP push offset public_5e6a08 @0x5b22e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a08
/*FIXUP push offset public_5e6ce8 @0x5b22eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6ce8
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5b22f6 : nop
        call public_41b150
        call public_401380
        call dword ptr ds : [public_5c6db0]
        mov ecx, dword ptr ds : [public_67eca0]
        push ecx
        call dword ptr ds : [public_5c6dac]
        add esp, 4
        mov ecx, offset public_67e7bc
        call public_5b73c8
        mov edx, dword ptr ds : [public_67eca8]
        push edx
        call dword ptr ds : [public_5c6f08]
        mov dword ptr ds : [public_67eca8], 0
        call dword ptr ds : [public_5c6c78]
        call dword ptr ds : [public_5c6cc8]
        call dword ptr ds : [public_5c6cc4]
        call public_5641d0
        pop edi
        pop esi
        jmp dword ptr ds : [public_5c7304]
        UNREACHABLE_TRAP(0x5b2190)
    }
}

#undef public_5b21b9
#undef public_5b2226
#undef public_5b2250
#undef public_5b2262
#undef public_5b2271
#undef public_5b22f6
