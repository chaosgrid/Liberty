#include "RP8-PCH.h"


#define public_6d0ad0b _public_6d0ad0b
#define public_6d0ad52 _public_6d0ad52
#define public_6d0ad5e _public_6d0ad5e
#define public_6d0ad76 _public_6d0ad76

PROC_DECLARE(0x6d0aca6, internal_6d0aca6, public_6d0aca6);
extern "C" NAKED register_t __cdecl internal_6d0aca6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ad0b
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d66328 @0x6d0ace4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66328
        push 0xA47
/*FIXUP push offset public_6d66360 @0x6d0acee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66360
/*FIXUP push offset public_6d663ac @0x6d0acf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d663ac
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ad76
        public_6d0ad0b : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22C8
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx edx, byte ptr ds : [ecx+0x18]
        test edx, edx
        jne public_6d0ad5e
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [edx+0xA4]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jl public_6d0ad52
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x18], 1
        jmp public_6d0ad5e
        public_6d0ad52 : nop
        mov ecx, 6
        xor eax, eax
        mov edi, dword ptr ss : [ebp-0xC]
        rep stosd
        public_6d0ad5e : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        public_6d0ad76 : nop
        pop edi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0aca6)
    }
}

#undef public_6d0ad0b
#undef public_6d0ad52
#undef public_6d0ad5e
#undef public_6d0ad76
