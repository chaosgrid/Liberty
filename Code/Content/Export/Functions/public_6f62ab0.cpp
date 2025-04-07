#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f62950);
CLANG_FORWARD_PROC_SYMBOL(public_6f62ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f730c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73130);

#define public_6f62ae3 _public_6f62ae3
#define public_6f62b5d _public_6f62b5d
#define public_6f62b67 _public_6f62b67
#define public_6f62b7e _public_6f62b7e
#define public_6f62b9e _public_6f62b9e
#define public_6f62bb3 _public_6f62bb3
#define public_6f62bb8 _public_6f62bb8
#define public_6f62bbf _public_6f62bbf
#define public_6f62bc4 _public_6f62bc4
#define public_6f62c86 _public_6f62c86
#define public_6f62c9d _public_6f62c9d
#define public_6f62ce6 _public_6f62ce6
#define public_6f62cfc _public_6f62cfc
#define public_6f62d86 _public_6f62d86
#define public_6f62db3 _public_6f62db3
#define public_6f62dbf _public_6f62dbf
#define public_6f62e16 _public_6f62e16
#define public_6f62e30 _public_6f62e30
#define public_6f62e94 _public_6f62e94
#define public_6f62e9a _public_6f62e9a
#define public_6f62ebc _public_6f62ebc
#define public_6f62f05 _public_6f62f05
#define public_6f62f1b _public_6f62f1b
#define public_6f62f3b _public_6f62f3b
#define public_6f62f46 _public_6f62f46

PROC_DECLARE(0x6f62ab0, internal_6f62ab0, public_6f62ab0);
extern "C" NAKED register_t __cdecl internal_6f62ab0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        push edi
        or ebx, 0xFFFFFFFF
        mov edx, ebp
        xor edi, edi
        cmp edx, ecx
        mov dword ptr ss : [esp+0x10], 0xBF800000
        mov dword ptr ss : [esp+0x14], ebx
        je public_6f62b7e
        lea eax, ds:[edx+4]
        mov dword ptr ss : [esp+0x2C], eax
        public_6f62ae3 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0x1C], ebx
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x38]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x3C]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f62b5d
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6f62b5d
        fld dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_6f62b7e
        jmp public_6f62b67
        public_6f62b5d : nop
        mov ebx, edi
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ebx
        public_6f62b67 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        add edx, 0x44
        add eax, 0x44
        inc edi
        cmp edx, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6f62ae3
        public_6f62b7e : nop
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f62bbf
        mov edx, dword ptr ss : [esp+0x34]
        cmp byte ptr ds : [edx], 0
        je public_6f62bb8
        test ebx, ebx
        je public_6f62bb8
        test ebp, ebp
        jne public_6f62b9e
        xor edx, edx
        jmp public_6f62bb3
        public_6f62b9e : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f62bb3 : nop
        dec edx
        cmp ebx, edx
        jne public_6f62bbf
        public_6f62bb8 : nop
        mov byte ptr ss : [esp+0x30], 0
        jmp public_6f62bc4
        public_6f62bbf : nop
        mov byte ptr ss : [esp+0x30], 1
        public_6f62bc4 : nop
        xor edx, edx
        cmp ebx, edx
        jne public_6f62c86
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        add edi, 0x34
        push edi
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x44], 1
        call public_6f62950
        add esp, 0x18
        test al, al
        je public_6f62f46
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [esp+0x28]
        add edx, 4
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [edx+8]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x24], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0x457A0000
        call public_6f72dd0
        test al, al
        jne public_6f62f3b
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x428C0000
        mov dword ptr ss : [esp+0x48], 0x457A0000
        call public_6f730c0
        test al, al
        jne public_6f62f3b
        mov dword ptr ss : [esp+0x2C], 0x457A0000
        lea eax, ss:[esp+0x2C]
        jmp public_6f62e94
        public_6f62c86 : nop
        cmp ebp, edx
        je public_6f62c9d
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f62c9d : nop
        dec edx
        cmp ebx, edx
        jne public_6f62d86
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        add edi, 0x34
        push edi
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        call public_6f62950
        add esp, 0x18
        test al, al
        je public_6f62f46
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f62ce6
        xor edx, edx
        jmp public_6f62cfc
        public_6f62ce6 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, ecx
        mov eax, 0x78787879
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f62cfc : nop
        mov esi, dword ptr ss : [esp+0x28]
        imul edx, 0x44
        lea ecx, ds:[edx+ecx-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0x457A0000
        call public_6f72dd0
        test al, al
        jne public_6f62f3b
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x428C0000
        mov dword ptr ss : [esp+0x48], 0x457A0000
        call public_6f730c0
        test al, al
        jne public_6f62f3b
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x30], 0x457A0000
        push eax
        jmp public_6f62e9a
        public_6f62d86 : nop
        call dword ptr ds : [public_6fb3370]
        shl eax, 1
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ecx, eax
        sar ecx, 0xF
        mov eax, 1
        cmp ecx, eax
        jne public_6f62db3
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        jmp public_6f62dbf
        public_6f62db3 : nop
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], eax
        public_6f62dbf : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        push ebp
        push edx
        add edi, 0x34
        push edi
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f62950
        add esp, 0x18
        test al, al
        je public_6f62ebc
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [ecx]
        xor eax, eax
        cmp edx, edi
        setg al
        lea eax, ds:[eax+eax-1]
        test eax, eax
        jle public_6f62e16
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f62f05
        xor edx, edx
        jmp public_6f62f1b
        public_6f62e16 : nop
        mov edx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x20], edx
        public_6f62e30 : nop
        mov esi, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0x457A0000
        call public_6f72dd0
        test al, al
        jne public_6f62f3b
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x428C0000
        mov dword ptr ss : [esp+0x48], 0x457A0000
        call public_6f730c0
        test al, al
        jne public_6f62f3b
        mov dword ptr ss : [esp+0x14], 0x457A0000
        lea eax, ss:[esp+0x14]
        public_6f62e94 : nop
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        public_6f62e9a : nop
        mov ecx, esi
        call public_6f73130
        test al, al
        jne public_6f62f3b
        mov cl, byte ptr ss : [esp+0x30]
        pop edi
        mov al, 1
        pop esi
        cmp cl, al
        pop ebp
        sete al
        pop ebx
        add esp, 0x14
        ret 
        public_6f62ebc : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x14]
        push ebp
        push ebx
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x54], edx
        call public_6f62950
        add esp, 0x18
        test al, al
        je public_6f62f46
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [ebx]
        xor eax, eax
        cmp edx, edi
        setg al
        lea eax, ds:[eax+eax-1]
        test eax, eax
        jle public_6f62e16
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f62f05
        xor edx, edx
        jmp public_6f62f1b
        public_6f62f05 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, ecx
        mov eax, 0x78787879
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f62f1b : nop
        imul edx, 0x44
        lea ecx, ds:[edx+ecx-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f62e30
        public_6f62f3b : nop
        mov cl, byte ptr ss : [esp+0x30]
        xor al, al
        cmp cl, al
        sete al
        public_6f62f46 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f62ab0)
    }
}

#undef public_6f62ae3
#undef public_6f62b5d
#undef public_6f62b67
#undef public_6f62b7e
#undef public_6f62b9e
#undef public_6f62bb3
#undef public_6f62bb8
#undef public_6f62bbf
#undef public_6f62bc4
#undef public_6f62c86
#undef public_6f62c9d
#undef public_6f62ce6
#undef public_6f62cfc
#undef public_6f62d86
#undef public_6f62db3
#undef public_6f62dbf
#undef public_6f62e16
#undef public_6f62e30
#undef public_6f62e94
#undef public_6f62e9a
#undef public_6f62ebc
#undef public_6f62f05
#undef public_6f62f1b
#undef public_6f62f3b
#undef public_6f62f46
