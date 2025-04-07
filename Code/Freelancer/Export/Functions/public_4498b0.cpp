#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4498b0);
CLANG_FORWARD_PROC_SYMBOL(public_555b20);
CLANG_FORWARD_PROC_SYMBOL(public_555c70);

#define public_4498d5 _public_4498d5
#define public_449935 _public_449935
#define public_44995f _public_44995f
#define public_449981 _public_449981

PROC_DECLARE(0x4498b0, internal_4498b0, public_4498b0);
extern "C" NAKED register_t __cdecl internal_4498b0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0xB4]
        push edi
        xor edi, edi
        test ecx, ecx
        jle public_449981
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x10], 0x14
        lea ebx, ds:[esi+0x64]
        public_4498d5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+eax]
        lea ebp, ds:[esi+0x4C]
        push edx
        mov ecx, ebp
        call public_555b20
        cmp eax, 0xFFFFFFFF
        je public_449935
        push eax
        mov eax, dword ptr ds : [esi+0x44]
        push eax
        mov ecx, ebp
        call public_555c70
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+0x40]
        mov dl, byte ptr ds : [edi+ecx+0x94]
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [ecx]
        push 0
        push 0x3F800000
        neg dl
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        sbb edx, edx
        and edx, 2
        push edx
        push eax
        push ecx
        call dword ptr ss : [ebp+0x2C]
        jmp public_44995f
        public_449935 : nop
        mov edx, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+edx]
        push edx
        push 0xED
/*FIXUP push offset public_5cbf24 @0x449945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf24
        mov eax, 0x100001
/*FIXUP push offset public_5cbee0 @0x44994f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbee0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_44995f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0xB4]
        inc edi
        add edx, 4
        add ebx, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], edx
        jl public_4498d5
        pop ebp
        pop ebx
        public_449981 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4498b0)
    }
}

#undef public_4498d5
#undef public_449935
#undef public_44995f
#undef public_449981
