#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401380);
CLANG_FORWARD_PROC_SYMBOL(public_401780);
CLANG_FORWARD_PROC_SYMBOL(public_401b50);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_401397 _public_401397
#define public_4013c4 _public_4013c4
#define public_4013da _public_4013da
#define public_401401 _public_401401
#define public_40142b _public_40142b
#define public_401450 _public_401450
#define public_401454 _public_401454
#define public_401477 _public_401477

PROC_DECLARE(0x401380, internal_401380, public_401380);
extern "C" NAKED register_t __cdecl internal_401380()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_616444]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        xor ebx, ebx
        cmp ecx, eax
        push edi
        mov dword ptr ss : [esp+0xC], ecx
        je public_4013da
        public_401397 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        test edx, edx
        jle public_4013c4
        mov ecx, dword ptr ds : [ecx+0xC]
        push edx
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x96
/*FIXUP push offset public_5c735c @0x4013ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c735c
        mov eax, 0x100002
/*FIXUP push offset public_5c73c0 @0x4013b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c73c0
        push eax
        inc ebx
        call dword ptr ds : [edx]
        add esp, 0x18
        public_4013c4 : nop
        lea ecx, ss:[esp+0xC]
        call public_536020
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_616444]
        cmp ecx, eax
        jne public_401397
        public_4013da : nop
        mov edx, dword ptr ds : [public_616450]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_401450
        mov edx, ecx
        cmp ecx, edx
        jne public_401450
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_616448]
        cmp edi, ecx
        mov esi, edi
        je public_40142b
        public_401401 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_616440
        call public_401b50
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_616448]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_401401
        mov eax, dword ptr ds : [public_616444]
        public_40142b : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_616444]
        mov dword ptr ds : [public_616450], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_616444]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        public_401450 : nop
        cmp ecx, eax
        je public_401477
        public_401454 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        call public_536020
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_616440
        call public_401780
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        jne public_401454
        public_401477 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x401380)
    }
}

#undef public_401397
#undef public_4013c4
#undef public_4013da
#undef public_401401
#undef public_40142b
#undef public_401450
#undef public_401454
#undef public_401477
