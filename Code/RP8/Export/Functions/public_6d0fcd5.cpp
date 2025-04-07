#include "RP8-PCH.h"


#define public_6d0fd46 _public_6d0fd46
#define public_6d0fdba _public_6d0fdba
#define public_6d0fdcc _public_6d0fdcc

PROC_DECLARE(0x6d0fcd5, internal_6d0fcd5, public_6d0fcd5);
extern "C" NAKED register_t __cdecl internal_6d0fcd5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0fd46
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-4], eax
/*FIXUP push offset public_6d68840 @0x6d0fd1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68840
        push 0xE49
/*FIXUP push offset public_6d68890 @0x6d0fd25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68890
/*FIXUP push offset public_6d688dc @0x6d0fd2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d688dc
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0fdcc
        public_6d0fd46 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        imul edx, 0xE8
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx+0x1854]
        mov edx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ecx+edx*8]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx edx, byte ptr ds : [ecx+4]
        test edx, edx
        jne public_6d0fdba
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        call dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [ebp-8], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-8], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+4], al
        mov edx, dword ptr ss : [ebp-0xC]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d0fdba
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], 0
        public_6d0fdba : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        public_6d0fdcc : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d0fcd5)
    }
}

#undef public_6d0fd46
#undef public_6d0fdba
#undef public_6d0fdcc
