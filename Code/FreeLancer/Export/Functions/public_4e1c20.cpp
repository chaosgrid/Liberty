#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c5890);
CLANG_FORWARD_PROC_SYMBOL(public_4c58b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8110);
CLANG_FORWARD_PROC_SYMBOL(public_4dfc40);
CLANG_FORWARD_PROC_SYMBOL(public_4e22b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e27e0);
CLANG_FORWARD_PROC_SYMBOL(public_4e3bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7980);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4e1c57 _public_4e1c57
#define public_4e1cdb _public_4e1cdb
#define public_4e1cf1 _public_4e1cf1
#define public_4e1cf3 _public_4e1cf3
#define public_4e1d40 _public_4e1d40
#define public_4e1d42 _public_4e1d42
#define public_4e1d5c _public_4e1d5c
#define public_4e1df7 _public_4e1df7
#define public_4e1e2d _public_4e1e2d
#define public_4e1e45 _public_4e1e45
#define public_4e1e5d _public_4e1e5d
#define public_4e1e70 _public_4e1e70
#define public_4e1ea0 _public_4e1ea0
#define public_4e1ea4 _public_4e1ea4
#define public_4e1eb6 _public_4e1eb6
#define public_4e1ebd _public_4e1ebd
#define public_4e1ef2 _public_4e1ef2
#define public_4e1efc _public_4e1efc
#define public_4e1f54 _public_4e1f54
#define public_4e1f76 _public_4e1f76
#define public_4e1f7e _public_4e1f7e
#define public_4e1f85 _public_4e1f85
#define public_4e1ff3 _public_4e1ff3
#define public_4e2004 _public_4e2004
#define public_4e2036 _public_4e2036
#define public_4e20c7 _public_4e20c7
#define public_4e20fb _public_4e20fb
#define public_4e215c _public_4e215c
#define public_4e21ed _public_4e21ed
#define public_4e2244 _public_4e2244
#define public_4e2257 _public_4e2257
#define public_4e2273 _public_4e2273
#define public_4e2275 _public_4e2275

PROC_DECLARE(0x4e1c20, internal_4e1c20, public_4e1c20);
extern "C" NAKED register_t __cdecl internal_4e1c20()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x634]
        test al, al
        push edi
        je public_4e1c57
        push 1
        mov byte ptr ds : [esi+0x634], 0
        call public_4c8110
        mov cl, byte ptr ds : [esi+0x498]
        add esp, 4
        cmp al, cl
        je public_4e1c57
        mov eax, dword ptr ds : [esi-0x38]
        lea ecx, ds:[esi-0x38]
        call dword ptr ds : [eax+0x30]
        public_4e1c57 : nop
        lea ecx, ds:[esi-0x38]
        mov dword ptr ss : [esp+0x14], ecx
        call public_4e3bd0
        test eax, eax
        je public_4e1d5c
        mov ecx, dword ptr ds : [esi-0x10]
        test ecx, ecx
        je public_4e1d5c
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_4e1d5c
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_4e1d5c
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4e1cdb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e1cdb
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_4e1cdb
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_4e1d40
        add eax, 0xFFFFFFF8
        jmp public_4e1d42
        public_4e1cdb : nop
        mov al, byte ptr ds : [edi+0xA8]
        test al, al
        jne public_4e1d5c
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_4e1cf1
        lea ebx, ds:[eax-8]
        jmp public_4e1cf3
        public_4e1cf1 : nop
        xor ebx, ebx
        public_4e1cf3 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_5d15b8]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_4e1d5c
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_4e1d40
        add eax, 0xFFFFFFF8
        jmp public_4e1d42
        public_4e1d40 : nop
        xor eax, eax
        public_4e1d42 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [public_673344]
        push eax
        mov eax, dword ptr ds : [public_5c6368]
        movzx eax, word ptr ds : [eax]
        push eax
        push 0
        call dword ptr ds : [edx+0x48]
        public_4e1d5c : nop
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edi
        call public_55e280
        test al, al
        jne public_4e2257
        lea ebp, ds:[esi+0x4A8]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], ebp
        call public_55e280
        test al, al
        jne public_4e2257
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4e1efc
        mov byte ptr ss : [esp+0x12], 0
        call public_54baf0
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_4e1ebd
        mov ecx, eax
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_4e1ebd
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4e1ebd
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_4e1ebd
        mov ecx, edi
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4e1df7
        cmp dword ptr ds : [eax+0xC0], 0xA
        sete byte ptr ss : [esp+0x12]
        public_4e1df7 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4e1e2d
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_4e1ebd
        mov ecx, dword ptr ds : [edi+0x1D4]
        test ecx, ecx
        je public_4e1ebd
        mov eax, dword ptr ds : [edi+0x1D8]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jmp public_4e1eb6
        public_4e1e2d : nop
        call public_4c5890
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x1B8]
        test eax, eax
        je public_4e1e45
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_4e1e5d
        public_4e1e45 : nop
        test ebp, ebp
        je public_4e1ebd
        push 0
        call public_4c58b0
        mov ecx, dword ptr ds : [edi+0xB0]
        add esp, 4
        cmp eax, ecx
        jne public_4e1ebd
        public_4e1e5d : nop
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x13], bl
        jle public_4e1ebd
        nop 
        lea esp, ss:[esp]
        public_4e1e70 : nop
        push ebx
        call public_4c58b0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4e1ea4
        push 1
        push edi
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4e1ea4
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp edi, eax
        jne public_4e1ea0
        mov byte ptr ss : [esp+0x13], 1
        public_4e1ea0 : nop
        inc dword ptr ss : [esp+0x18]
        public_4e1ea4 : nop
        inc ebx
        cmp ebx, ebp
        jl public_4e1e70
        cmp dword ptr ss : [esp+0x18], 1
        jle public_4e1ebd
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        public_4e1eb6 : nop
        je public_4e1ebd
        mov byte ptr ss : [esp+0x12], 1
        public_4e1ebd : nop
        mov bl, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ds : [esi+0x60C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        jne public_4e1ef2
        cmp dword ptr ds : [esi+0x610], 2
        jne public_4e1ef2
        mov dword ptr ds : [esi+0x610], 0
        public_4e1ef2 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x618], bl
        public_4e1efc : nop
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_4e1f76
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e1f76
        add eax, 0xC
        test eax, eax
        je public_4e1f76
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e1f76
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e1f76
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        mov edi, eax
        call public_4e3bd0
        test eax, eax
        jne public_4e1f54
        mov cl, byte ptr ds : [esi+0x524]
        test cl, cl
        je public_4e1f54
        mov cl, byte ptr ds : [esi+0x498]
        test cl, cl
        je public_4e1f54
        mov dword ptr ds : [esi+0x610], eax
        public_4e1f54 : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e1f7e
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e1f7e
        mov byte ptr ds : [esi+0x524], 1
        jmp public_4e1f85
        public_4e1f76 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        xor edi, edi
        jmp public_4e1f85
        public_4e1f7e : nop
        mov byte ptr ds : [esi+0x524], 0
        public_4e1f85 : nop
        mov eax, dword ptr ds : [esi+0x610]
        cmp eax, dword ptr ds : [esi+0x614]
        je public_4e1ff3
        mov ecx, dword ptr ds : [esi+0x600]
        mov edx, dword ptr ds : [ecx]
        xor ebx, ebx
        test eax, eax
        sete bl
        push 0
        push ebx
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [esi+0x610]
        mov ecx, dword ptr ds : [esi+0x604]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp ebx, 1
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ebx, dword ptr ds : [esi+0x610]
        mov ecx, dword ptr ds : [esi+0x60C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp ebx, 2
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ebx, dword ptr ss : [esp+0x14]
        public_4e1ff3 : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e2004
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_4e2036
        public_4e2004 : nop
        mov al, byte ptr ds : [esi+0x628]
        test al, al
        je public_4e2036
        push 0
        push 0x26
        mov byte ptr ds : [esi+0x628], 0
        call public_5763b0
        add esp, 8
        mov ecx, ebx
        call public_4e3bd0
        test eax, eax
        je public_4e2036
        push 0x23
        call public_5645c0
        add esp, 4
        public_4e2036 : nop
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4e20fb
        mov edx, dword ptr ds : [esi+0x610]
        mov ecx, 1
        cmp edx, ecx
        je public_4e20fb
        cmp dword ptr ds : [esi+0x614], ecx
        jne public_4e20c7
        push ecx
        mov ecx, esi
        call public_5a0c30
        mov cl, byte ptr ds : [esi+0x6C]
        mov al, 3
        or cl, al
        mov byte ptr ds : [esi+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x494]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4EC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x600]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x608]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x604]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x60C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp byte ptr ds : [esi+0x618], dl
        push 0
        sete dl
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [public_5d8864]
        mov dword ptr ds : [esi+0x520], eax
        public_4e20c7 : nop
        mov ecx, dword ptr ds : [esi+0x610]
        mov dword ptr ds : [esi+0x614], ecx
        mov ecx, esi
        call public_5a17b0
        mov ecx, dword ptr ss : [esp+0x24]
        call public_55e170
        mov ecx, ebp
        call public_55e5e0
        push 0
        mov ecx, ebx
        call public_4e22b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_4e20fb : nop
        test al, al
        mov bl, 0xFC
        je public_4e215c
        cmp dword ptr ds : [esi+0x614], 1
        je public_4e215c
        mov edx, dword ptr ds : [esi+0x610]
        mov ecx, dword ptr ds : [esi+0x4C8]
        mov dword ptr ds : [esi+0x614], edx
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x4CC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x61C]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4DC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4E0]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4D8]
        or byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0x490]
        and byte ptr ds : [eax+0x6C], bl
        public_4e215c : nop
        mov ecx, esi
        call public_4e7980
        test edi, edi
        je public_4e21ed
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e21ed
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e21ed
        mov ecx, edi
        call dword ptr ds : [public_5c6540]
        cmp ax, word ptr ds : [esi+0x4FC]
        lea edi, ds:[esi+0x4FC]
        setne bl
        push eax
        call public_42d680
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_4dfc40
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4e2244
        test bl, bl
        je public_4e2244
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        mov esi, dword ptr ds : [esi+0x4CC]
        mov edx, dword ptr ds : [esi]
        push 0x14
        push 1
        push 0x50
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x14]
        push 1
        call public_4e22b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_4e21ed : nop
        mov ecx, dword ptr ds : [esi+0x4C8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x4CC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x61C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x4DC]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4E0]
        and byte ptr ds : [eax+0x6C], bl
        mov esi, dword ptr ds : [esi+0x4D8]
        and byte ptr ds : [esi+0x6C], bl
        public_4e2244 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 1
        call public_4e22b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_4e2257 : nop
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4e2273
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_4e2273
        mov eax, 1
        jmp public_4e2275
        public_4e2273 : nop
        xor eax, eax
        public_4e2275 : nop
        mov ecx, dword ptr ds : [esi+0x490]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        lea ecx, ds:[esi+0x4A8]
        call public_55e5e0
        mov ecx, dword ptr ss : [esp+0x14]
        call public_4e27e0
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        jmp public_4e7980
        UNREACHABLE_TRAP(0x4e1c20)
    }
}

#undef public_4e1c57
#undef public_4e1cdb
#undef public_4e1cf1
#undef public_4e1cf3
#undef public_4e1d40
#undef public_4e1d42
#undef public_4e1d5c
#undef public_4e1df7
#undef public_4e1e2d
#undef public_4e1e45
#undef public_4e1e5d
#undef public_4e1e70
#undef public_4e1ea0
#undef public_4e1ea4
#undef public_4e1eb6
#undef public_4e1ebd
#undef public_4e1ef2
#undef public_4e1efc
#undef public_4e1f54
#undef public_4e1f76
#undef public_4e1f7e
#undef public_4e1f85
#undef public_4e1ff3
#undef public_4e2004
#undef public_4e2036
#undef public_4e20c7
#undef public_4e20fb
#undef public_4e215c
#undef public_4e21ed
#undef public_4e2244
#undef public_4e2257
#undef public_4e2273
#undef public_4e2275
