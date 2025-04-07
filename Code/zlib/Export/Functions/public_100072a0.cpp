#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006d90);
CLANG_FORWARD_PROC_SYMBOL(public_100072a0);

#define public_1000731e _public_1000731e
#define public_1000733a _public_1000733a
#define public_100073a5 _public_100073a5
#define public_100073ba _public_100073ba
#define public_10007425 _public_10007425
#define public_1000743a _public_1000743a
#define public_10007450 _public_10007450
#define public_100074bf _public_100074bf
#define public_100074da _public_100074da
#define public_100074e7 _public_100074e7

PROC_DECLARE(0x100072a0, internal_100072a0, public_100072a0);
extern "C" NAKED register_t __cdecl internal_100072a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0xB
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        jle public_1000731e
        mov esi, dword ptr ss : [esp+0x14]
        add esi, 0xFFFFFEFF
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x1C], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov bl, byte ptr ds : [eax+0x16B0]
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF5
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_1000733a
        public_1000731e : nop
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 0xFFFFFEFF
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, 5
        mov dword ptr ds : [eax+0x16B4], ecx
        public_1000733a : nop
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0xB
        jle public_100073a5
        lea esi, ds:[ebx-1]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x1C], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov bl, byte ptr ds : [eax+0x16B0]
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF5
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_100073ba
        public_100073a5 : nop
        lea edx, ds:[ebx-1]
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, 5
        mov dword ptr ds : [eax+0x16B4], ecx
        public_100073ba : nop
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0xC
        jle public_10007425
        lea esi, ss:[ebp-4]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x1C], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov bl, byte ptr ds : [eax+0x16B0]
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF4
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_1000743a
        public_10007425 : nop
        lea edx, ss:[ebp-4]
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, 4
        mov dword ptr ds : [eax+0x16B4], ecx
        public_1000743a : nop
        xor edi, edi
        test ebp, ebp
        jle public_100074e7
        jmp public_10007450
        lea esp, ss:[esp]
        lea ecx, ds:[ecx]
        public_10007450 : nop
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0xD
        movzx edx, byte ptr ds : [edi+public_1000b71c]
        jle public_100074bf
        movzx esi, word ptr ds : [eax+edx*4+0xA76]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+0x14]
        or word ptr ds : [eax+0x16B0], dx
        mov bl, byte ptr ds : [eax+0x16B0]
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF3
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_100074da
        public_100074bf : nop
        mov dx, word ptr ds : [eax+edx*4+0xA76]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, 3
        mov dword ptr ds : [eax+0x16B4], ecx
        public_100074da : nop
        inc edi
        cmp edi, ebp
        jl public_10007450
        mov ebx, dword ptr ss : [esp+0x18]
        public_100074e7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        dec ecx
        push ecx
        lea ecx, ds:[eax+0x8C]
        call public_10006d90
        dec ebx
        push ebx
        lea ecx, ds:[eax+0x980]
        call public_10006d90
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x100072a0)
    }
}

#undef public_1000731e
#undef public_1000733a
#undef public_100073a5
#undef public_100073ba
#undef public_10007425
#undef public_1000743a
#undef public_10007450
#undef public_100074bf
#undef public_100074da
#undef public_100074e7
