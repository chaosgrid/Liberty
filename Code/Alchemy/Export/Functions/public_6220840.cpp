#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222000);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);

#define public_622085a _public_622085a
#define public_6220897 _public_6220897
#define public_622089f _public_622089f
#define public_62208b3 _public_62208b3
#define public_62208e3 _public_62208e3
#define public_62208f5 _public_62208f5
#define public_6220901 _public_6220901
#define public_6220906 _public_6220906
#define public_622092f _public_622092f

PROC_DECLARE(0x6220840, internal_6220840, public_6220840);
extern "C" NAKED register_t __cdecl internal_6220840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x12C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x140]
        push edi
        xor ebp, ebp
        lea ebx, ds:[eax+4]
        public_622085a : nop
        push esi
        call public_623ef70
        mov ecx, dword ptr ss : [esp+0x144]
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [ecx+8]
        push edx
        mov ecx, ebx
        call public_6222000
        mov ecx, dword ptr ds : [ebx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6220897
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6220897
        lea eax, ss:[esp+0x18]
        jmp public_622089f
        public_6220897 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_622089f : nop
        cmp dword ptr ds : [eax], edi
        je public_622092f
        test ebp, ebp
        jne public_6220906
        lea edx, ss:[esp+0x3C]
        mov eax, esi
        sub edx, esi
        public_62208b3 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_62208b3
        mov edi, dword ptr ds : [public_624b068]
        lea eax, ss:[esp+0x3C]
        push 0x23
        push eax
        call edi
        add esp, 8
        test eax, eax
        je public_62208e3
        mov byte ptr ds : [eax], 0
        inc eax
        push eax
        call dword ptr ds : [public_624b050]
        add esp, 4
        mov ebp, eax
        public_62208e3 : nop
        push 0x2E
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6220901
        lea edx, ss:[esp+0x1C]
        sub edx, eax
        public_62208f5 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_62208f5
        jmp public_6220906
        public_6220901 : nop
        mov byte ptr ss : [esp+0x1C], 0
        public_6220906 : nop
        lea ecx, ss:[esp+0x1C]
        inc ebp
        push ecx
        lea edx, ss:[esp+0x40]
        push ebp
        push edx
/*FIXUP push offset public_6256188 @0x6220912*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256188
/*FIXUP push offset public_6257e80 @0x6220917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257e80
        call dword ptr ds : [public_624b064]
        add esp, 0x14
        mov esi, offset public_6257e80
        jmp public_622085a
        public_622092f : nop
        mov eax, dword ptr ss : [esp+0x148]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x12C
        ret 0xC
        UNREACHABLE_TRAP(0x6220840)
    }
}

#undef public_622085a
#undef public_6220897
#undef public_622089f
#undef public_62208b3
#undef public_62208e3
#undef public_62208f5
#undef public_6220901
#undef public_6220906
#undef public_622092f
