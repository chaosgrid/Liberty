#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4c2380);
CLANG_FORWARD_PROC_SYMBOL(public_4c2800);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543320);

#define public_4c23f2 _public_4c23f2
#define public_4c2475 _public_4c2475
#define public_4c24de _public_4c24de
#define public_4c24eb _public_4c24eb
#define public_4c24fd _public_4c24fd

PROC_DECLARE(0x4c2380, internal_4c2380, public_4c2380);
extern "C" NAKED register_t __cdecl internal_4c2380()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x330]
        test edi, edi
        je public_4c24eb
        mov eax, dword ptr ss : [ebp+8]
        movzx eax, word ptr ds : [eax+2]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6370]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x14]
        xor edx, edx
        mov dx, word ptr ds : [eax+2]
        push ecx
        mov ecx, esi
        push edx
        call dword ptr ds : [public_5c6438]
        mov ecx, esi
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [edi+0x60]
        mov eax, dword ptr ss : [ebp+8]
        movzx eax, word ptr ds : [eax+2]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6370]
        mov ecx, dword ptr ds : [edi+0x30]
        mov esi, eax
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, ecx
        jns public_4c23f2
        xor eax, eax
        public_4c23f2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4bf850
        mov eax, dword ptr ds : [ebx+0x42C]
        mov ecx, dword ptr ss : [esp+0x10]
        neg esi
        sbb esi, esi
        push 1
        push eax
        and esi, ecx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4c2475
        mov ecx, eax
        call public_543320
        mov ecx, dword ptr ds : [ebx+0x330]
        mov edx, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ds : [ecx+0x64]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0x334]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [edx+0x64]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [public_5c6440]
        fsubr qword ptr ds : [ebx+0x3F0]
        fsub qword ptr ss : [esp+0x10]
        fadd qword ptr ss : [esp+0x18]
        fstp qword ptr ds : [ebx+0x3E8]
        public_4c2475 : nop
        mov eax, dword ptr ds : [ebx+0x334]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [eax+0x64]
        mov eax, dword ptr ds : [ebx+0x330]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        call public_4c4640
        fsub qword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0x330]
        fadd qword ptr ss : [esp+0x10]
        fstp qword ptr ds : [ebx+0x3C0]
        mov ecx, dword ptr ds : [eax+0x58]
        cmp esi, ecx
        jne public_4c24eb
        push 0
        push eax
        mov ecx, ebx
        call public_4c2800
        mov eax, dword ptr ds : [ebx+0x330]
        mov ecx, dword ptr ds : [eax+0x58]
        test ecx, ecx
        je public_4c24de
        mov byte ptr ds : [ecx], 0
        mov dword ptr ds : [eax+0x58], 0
        public_4c24de : nop
        mov ecx, dword ptr ds : [ebx+0x330]
        push 0xFFFFFFFF
        call public_4bf850
        public_4c24eb : nop
        cmp dword ptr ds : [ebx+0x390], 3
        jne public_4c24fd
        push 4
        mov ecx, ebx
        call public_4c1ae0
        public_4c24fd : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x4c2380)
    }
}

#undef public_4c23f2
#undef public_4c2475
#undef public_4c24de
#undef public_4c24eb
#undef public_4c24fd
