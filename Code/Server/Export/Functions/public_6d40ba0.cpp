#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d407e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d41f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d42e30);
CLANG_FORWARD_PROC_SYMBOL(public_6d42ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d40be6 _public_6d40be6
#define public_6d40c10 _public_6d40c10
#define public_6d40c3e _public_6d40c3e
#define public_6d40c46 _public_6d40c46
#define public_6d40c63 _public_6d40c63
#define public_6d40c77 _public_6d40c77
#define public_6d40c95 _public_6d40c95
#define public_6d40cb8 _public_6d40cb8
#define public_6d40cc0 _public_6d40cc0
#define public_6d40cdd _public_6d40cdd
#define public_6d40cf9 _public_6d40cf9
#define public_6d40d1f _public_6d40d1f
#define public_6d40d24 _public_6d40d24
#define public_6d40d79 _public_6d40d79
#define public_6d40d7d _public_6d40d7d
#define public_6d40d90 _public_6d40d90
#define public_6d40e01 _public_6d40e01
#define public_6d40e4d _public_6d40e4d
#define public_6d40e70 _public_6d40e70
#define public_6d40e7f _public_6d40e7f
#define public_6d40e8a _public_6d40e8a
#define public_6d40e9a _public_6d40e9a
#define public_6d40ef0 _public_6d40ef0

PROC_DECLARE(0x6d40ba0, internal_6d40ba0, public_6d40ba0);
extern "C" NAKED register_t __cdecl internal_6d40ba0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [ebx+4]
        test al, al
        push ebp
        push esi
        push edi
        mov ebp, ecx
        je public_6d40d1f
        cmp word ptr ds : [ebx+0x28], 0
        jne public_6d40cf9
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        jne public_6d40cf9
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        jne public_6d40cf9
        lea ecx, ds:[ebx+8]
        lea eax, ss:[ebp+8]
        sub ecx, eax
        mov edx, 8
        public_6d40be6 : nop
        mov esi, dword ptr ds : [ecx+eax]
        mov edi, dword ptr ds : [eax]
        not esi
        or edi, esi
        mov dword ptr ds : [eax], edi
        add eax, 4
        dec edx
        jne public_6d40be6
        mov ecx, dword ptr ds : [ebx+0x30]
        cmp ecx, dword ptr ds : [ebx+0x34]
        mov eax, 0xFF
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d40c95
        lea esp, ss:[esp]
        public_6d40c10 : nop
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        cmp dx, 0x100
        je public_6d40c77
        inc eax
        dec edx
        mov word ptr ss : [esp+0x24], ax
        mov word ptr ss : [esp+0x26], dx
        mov eax, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d40c3e
        xor edi, edi
        jmp public_6d40c46
        public_6d40c3e : nop
        mov edi, dword ptr ds : [esi+0xC]
        sub edi, eax
        sar edi, 2
        public_6d40c46 : nop
        mov ecx, esi
        call public_6d31890
        cmp edi, eax
        jne public_6d40c63
        mov ecx, esi
        call public_6d31890
        add eax, 5
        push eax
        mov ecx, esi
        call public_6d41e70
        public_6d40c63 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        call public_6d41f90
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d40c77 : nop
        mov edx, dword ptr ds : [ebx+0x34]
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        add ecx, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d40c10
        cmp ax, 0xFFFF
        je public_6d40ef0
        public_6d40c95 : nop
        inc eax
        mov word ptr ss : [esp+0x24], ax
        mov word ptr ss : [esp+0x26], 0xFFFF
        mov eax, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d40cb8
        xor edi, edi
        jmp public_6d40cc0
        public_6d40cb8 : nop
        mov edi, dword ptr ds : [esi+0xC]
        sub edi, eax
        sar edi, 2
        public_6d40cc0 : nop
        mov ecx, esi
        call public_6d31890
        cmp edi, eax
        jne public_6d40cdd
        mov ecx, esi
        call public_6d31890
        add eax, 5
        push eax
        mov ecx, esi
        call public_6d41e70
        public_6d40cdd : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, esi
        call public_6d41f90
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6d40cf9 : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        lea ecx, ss:[ebp+0x48]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call public_6d05d90
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6d40d1f : nop
        xor eax, eax
        lea ecx, ds:[ebx+8]
        public_6d40d24 : nop
        mov edx, dword ptr ds : [ecx]
        or dword ptr ss : [ebp+eax*4+8], edx
        inc eax
        add ecx, 4
        cmp eax, 8
        jl public_6d40d24
        mov eax, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edi, dword ptr ss : [ebp+0x34]
        mov ebx, eax
        sub ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x38]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ebx, 2
        sar ecx, 2
        cmp ecx, ebx
        jae public_6d40e01
        mov ecx, esi
        call public_6d31890
        cmp ebx, eax
        jae public_6d40d79
        mov ecx, esi
        call public_6d31890
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6d40d7d
        public_6d40d79 : nop
        mov dword ptr ss : [esp+0x18], ebx
        public_6d40d7d : nop
        mov ecx, esi
        call public_6d31890
        add eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        jns public_6d40d90
        xor eax, eax
        public_6d40d90 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6d23e40
        push eax
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6d31890
        add eax, ebx
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        jmp public_6d40e9a
        public_6d40e01 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, ebx
        jae public_6d40e4d
        shl ebx, 2
        lea ecx, ds:[ebx+edi]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        sub eax, edi
        push edx
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        push edx
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x10]
        sub ecx, edi
        sar ecx, 2
        push edi
        lea edx, ds:[eax+ecx*4]
        push edx
        push eax
        jmp public_6d40e8a
        public_6d40e4d : nop
        test ebx, ebx
        jbe public_6d40e9a
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_6d40e7f
        nop 
        lea esp, ss:[esp]
        public_6d40e70 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d40e70
        public_6d40e7f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push eax
        push ecx
        public_6d40e8a : nop
        call public_6d407e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        add eax, ebx
        mov dword ptr ds : [esi+8], eax
        public_6d40e9a : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov dx, word ptr ds : [esi+0x28]
        or word ptr ss : [ebp+0x28], dx
        mov ebx, dword ptr ds : [esi+0x40]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x3C]
        lea edi, ss:[ebp+0x3C]
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6d42e30
        mov ebx, dword ptr ds : [esi+0x4C]
        add esp, 0x10
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x48]
        lea edi, ss:[ebp+0x48]
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_6d42ea0
        add esp, 0x10
        public_6d40ef0 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d40ba0)
    }
}

#undef public_6d40be6
#undef public_6d40c10
#undef public_6d40c3e
#undef public_6d40c46
#undef public_6d40c63
#undef public_6d40c77
#undef public_6d40c95
#undef public_6d40cb8
#undef public_6d40cc0
#undef public_6d40cdd
#undef public_6d40cf9
#undef public_6d40d1f
#undef public_6d40d24
#undef public_6d40d79
#undef public_6d40d7d
#undef public_6d40d90
#undef public_6d40e01
#undef public_6d40e4d
#undef public_6d40e70
#undef public_6d40e7f
#undef public_6d40e8a
#undef public_6d40e9a
#undef public_6d40ef0
