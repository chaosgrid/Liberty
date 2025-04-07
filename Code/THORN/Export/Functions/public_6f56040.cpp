#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ccc0);

#define public_6f56080 _public_6f56080
#define public_6f56089 _public_6f56089
#define public_6f560ad _public_6f560ad
#define public_6f560b1 _public_6f560b1
#define public_6f560b6 _public_6f560b6
#define public_6f560ef _public_6f560ef

PROC_DECLARE(0x6f56040, internal_6f56040, public_6f56040);
extern "C" NAKED register_t __cdecl internal_6f56040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a0b8]
        sub esp, 0xFC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6f5a134]
        add eax, 0x40
/*FIXUP push offset public_6f61978 @0x6f56058*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61978
        push eax
        call edi
        mov ecx, dword ptr ds : [public_6f5a0b8]
        mov ebp, dword ptr ds : [public_6f5a0f8]
        push ecx
        lea edx, ss:[esp+0x1C]
        push 0xFA
        push edx
        call ebp
        add esp, 0x14
        test eax, eax
        je public_6f560ef
        public_6f56080 : nop
        mov esi, offset public_6f61970
        lea eax, ss:[esp+0x10]
        public_6f56089 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f560b1
        test cl, cl
        je public_6f560ad
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f560b1
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f56089
        public_6f560ad : nop
        xor eax, eax
        jmp public_6f560b6
        public_6f560b1 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f560b6 : nop
        test eax, eax
        je public_6f560ef
        lea eax, ss:[esp+0x10]
        push eax
        call public_6f4ccc0
        mov ecx, dword ptr ds : [public_6f5a0b8]
        add ecx, 0x40
/*FIXUP push offset public_6f61978 @0x6f560cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61978
        push ecx
        call edi
        mov edx, dword ptr ds : [public_6f5a0b8]
        push edx
        lea eax, ss:[esp+0x20]
        push 0xFA
        push eax
        call ebp
        add esp, 0x18
        test eax, eax
        jne public_6f56080
        public_6f560ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xFC
        ret 
        UNREACHABLE_TRAP(0x6f56040)
    }
}

#undef public_6f56080
#undef public_6f56089
#undef public_6f560ad
#undef public_6f560b1
#undef public_6f560b6
#undef public_6f560ef
