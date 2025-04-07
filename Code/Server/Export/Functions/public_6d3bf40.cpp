#include "Server-PCH.h"


#define public_6d3bf80 _public_6d3bf80
#define public_6d3bfa3 _public_6d3bfa3
#define public_6d3bfd2 _public_6d3bfd2
#define public_6d3bfee _public_6d3bfee
#define public_6d3c000 _public_6d3c000
#define public_6d3c020 _public_6d3c020
#define public_6d3c03b _public_6d3c03b
#define public_6d3c03f _public_6d3c03f
#define public_6d3c043 _public_6d3c043
#define public_6d3c050 _public_6d3c050
#define public_6d3c069 _public_6d3c069
#define public_6d3c084 _public_6d3c084
#define public_6d3c092 _public_6d3c092
#define public_6d3c09e _public_6d3c09e

PROC_DECLARE(0x6d3bf40, internal_6d3bf40, public_6d3bf40);
extern "C" NAKED register_t __cdecl internal_6d3bf40()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0x10]
        push esi
        xor ecx, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], edx
        mov ebp, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6d3c043
        mov ebx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+0xC]
        cmp ecx, esi
        mov eax, edi
        je public_6d3bfa3
        nop 
        lea esp, ss:[esp]
        public_6d3bf80 : nop
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d3c03f
        cmp word ptr ds : [ecx], dx
        jne public_6d3c03f
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6d3bf80
        mov edx, dword ptr ss : [esp+0x10]
        public_6d3bfa3 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 1
        neg ecx
        mov edi, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d3c000
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d3bfd2
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bfd2 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        je public_6d3bfee
        cmp dword ptr ds : [ecx+8], eax
        jne public_6d3bfee
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bfee : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 8
        lea ecx, ds:[ecx]
        public_6d3c000 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jae public_6d3c043
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+0xC]
        cmp eax, esi
        mov ecx, edi
        je public_6d3c03b
        lea ecx, ds:[ecx]
        public_6d3c020 : nop
        mov dx, word ptr ds : [ecx]
        test dx, dx
        je public_6d3c03f
        cmp word ptr ds : [eax], dx
        jne public_6d3c03f
        add eax, 2
        add ecx, 2
        cmp eax, esi
        jne public_6d3c020
        mov edx, dword ptr ss : [esp+0x10]
        public_6d3c03b : nop
        mov edi, ecx
        jmp public_6d3c000
        public_6d3c03f : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6d3c043 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edx+0xC], ecx
        ja public_6d3c09e
        mov esi, dword ptr ss : [esp+0x20]
        public_6d3c050 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d3c084
        mov edx, dword ptr ds : [ecx]
        push edi
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d3c092
        mov edx, dword ptr ss : [esp+0x10]
        public_6d3c069 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        je public_6d3c09e
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        lea edi, ds:[edi+ecx*2]
        jmp public_6d3c050
        public_6d3c084 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d3c092
        cmp dword ptr ds : [esi+8], edi
        jne public_6d3c092
        jmp public_6d3c069
        public_6d3c092 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3c09e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d3bf40)
    }
}

#undef public_6d3bf80
#undef public_6d3bfa3
#undef public_6d3bfd2
#undef public_6d3bfee
#undef public_6d3c000
#undef public_6d3c020
#undef public_6d3c03b
#undef public_6d3c03f
#undef public_6d3c043
#undef public_6d3c050
#undef public_6d3c069
#undef public_6d3c084
#undef public_6d3c092
#undef public_6d3c09e
