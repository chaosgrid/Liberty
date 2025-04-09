#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_4104e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4102e2 _public_4102e2
#define public_410304 _public_410304
#define public_410333 _public_410333
#define public_4103b0 _public_4103b0
#define public_4103d2 _public_4103d2
#define public_4103f6 _public_4103f6
#define public_410410 _public_410410
#define public_410431 _public_410431
#define public_41043e _public_41043e

PROC_DECLARE(0x4102c0, internal_4102c0, public_4102c0);
extern "C" NAKED register_t __cdecl internal_4102c0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        push 0x18
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_410333
        mov esi, dword ptr ds : [public_6164e0]
        xor edi, edi
        cmp esi, edi
        je public_410304
        mov bl, 0xEF
        public_4102e2 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        and byte ptr ds : [esi+0xB4], bl
        mov esi, dword ptr ds : [esi+4]
        cmp esi, edi
        jne public_4102e2
        public_410304 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        push edi
        mov dword ptr ds : [public_6164e0], edi
        mov dword ptr ds : [public_6164e4], edi
        mov dword ptr ds : [public_6164e8], edi
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        public_410333 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x10]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, edx
        shr eax, 0x10
        mov esi, dword ptr ds : [public_6164e0]
        movzx eax, al
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, edx
        fild dword ptr ss : [esp+0x10]
        shr ecx, 8
        movzx ecx, cl
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x14]
        movzx edx, dl
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        xor ebp, ebp
        cmp esi, ebp
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x1C]
        je public_4103d2
        mov bl, 0xEF
        lea ebx, ds:[ebx]
        public_4103b0 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        and byte ptr ds : [esi+0xB4], bl
        mov esi, dword ptr ds : [esi+4]
        cmp esi, ebp
        jne public_4103b0
        public_4103d2 : nop
        mov edi, dword ptr ss : [esp+0x28]
        xor esi, esi
        cmp edi, ebp
        mov dword ptr ds : [public_6164e0], ebp
        mov dword ptr ds : [public_6164e4], ebp
        mov dword ptr ds : [public_6164e8], ebp
        jbe public_410410
        mov ebx, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x2C]
        public_4103f6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+esi*4]
        lea eax, ss:[esp+0x14]
        push eax
        push ebx
        push ebp
        call public_4104e0
        inc esi
        cmp esi, edi
        jb public_4103f6
        xor ebp, ebp
        public_410410 : nop
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov dword ptr ss : [esp+0x30], edx
        call public_5b7ec0
        mov ebx, eax
        cmp ebx, ebp
        jge public_410431
        xor ebx, ebx
        jmp public_41043e
        public_410431 : nop
        cmp ebx, 0xFF
        jle public_41043e
        mov ebx, 0xFF
        public_41043e : nop
        fld dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x34]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x2D], al
        call public_5b7ec0
        push eax
        call public_4104c0
        push 0xFF
        mov byte ptr ss : [esp+0x36], al
        call public_4104c0
        movzx esi, byte ptr ss : [esp+0x35]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, bl
        add esp, 0xC
        or edx, 0xFFFFFF00
        shl edx, 8
        or edx, esi
        movzx esi, byte ptr ss : [esp+0x2A]
        shl edx, 8
        or edx, esi
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4102c0)
    }
}

#undef public_4102e2
#undef public_410304
#undef public_410333
#undef public_4103b0
#undef public_4103d2
#undef public_4103f6
#undef public_410410
#undef public_410431
#undef public_41043e
