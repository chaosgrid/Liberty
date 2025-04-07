#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4c2220);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543320);

#define public_4c22ae _public_4c22ae
#define public_4c2327 _public_4c2327
#define public_4c2362 _public_4c2362
#define public_4c2374 _public_4c2374

PROC_DECLARE(0x4c2220, internal_4c2220, public_4c2220);
extern "C" NAKED register_t __cdecl internal_4c2220()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x330]
        test esi, esi
        je public_4c2362
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+8]
        mov cx, word ptr ds : [eax+2]
        mov dword ptr ss : [esp+0x28], edx
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [esp+0x2C], dl
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov word ptr ss : [esp+0x22], cx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov dl, byte ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov byte ptr ss : [esp+0x3C], dl
        mov dword ptr ss : [esp+0x40], eax
        mov byte ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        lea ebx, ds:[esi+0x20]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6434]
        mov ecx, ebx
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, dword ptr ds : [esi+0x30]
        jns public_4c22ae
        xor eax, eax
        public_4c22ae : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, esi
        call public_4bf850
        mov eax, dword ptr ds : [edi+0x42C]
        push 1
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4c2327
        mov ecx, eax
        call public_543320
        mov ecx, dword ptr ds : [edi+0x330]
        mov edx, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ds : [ecx+0x64]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [edi+0x334]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [edx+0x64]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [public_5c6440]
        fsubr qword ptr ds : [edi+0x3F0]
        fsub qword ptr ss : [esp+0x10]
        fadd qword ptr ss : [esp+0x18]
        fstp qword ptr ds : [edi+0x3E8]
        public_4c2327 : nop
        mov eax, dword ptr ds : [edi+0x334]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [eax+0x64]
        mov eax, dword ptr ds : [edi+0x330]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        call public_4c4640
        fsub qword ptr ss : [esp+0x18]
        fadd qword ptr ss : [esp+0x10]
        fstp qword ptr ds : [edi+0x3C0]
        public_4c2362 : nop
        cmp dword ptr ds : [edi+0x390], 3
        jne public_4c2374
        push 4
        mov ecx, edi
        call public_4c1ae0
        public_4c2374 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x4c2220)
    }
}

#undef public_4c22ae
#undef public_4c2327
#undef public_4c2362
#undef public_4c2374
