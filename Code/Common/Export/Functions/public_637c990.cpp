#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_637c990);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380c50);

#define public_637ca58 _public_637ca58
#define public_637ca81 _public_637ca81
#define public_637cab0 _public_637cab0
#define public_637cabe _public_637cabe
#define public_637cacd _public_637cacd
#define public_637cadf _public_637cadf
#define public_637cb01 _public_637cb01
#define public_637cb08 _public_637cb08
#define public_637cb16 _public_637cb16
#define public_637cb33 _public_637cb33
#define public_637cb80 _public_637cb80
#define public_637cb9e _public_637cb9e
#define public_637cbce _public_637cbce
#define public_637cbef _public_637cbef
#define public_637cc28 _public_637cc28
#define public_637cc48 _public_637cc48
#define public_637cc68 _public_637cc68
#define public_637cc99 _public_637cc99
#define public_637ccee _public_637ccee
#define public_637cd05 _public_637cd05
#define public_637cd07 _public_637cd07
#define public_637cd10 _public_637cd10
#define public_637cd28 _public_637cd28
#define public_637cd64 _public_637cd64
#define public_637cd88 _public_637cd88
#define public_637cd91 _public_637cd91
#define public_637cd9c _public_637cd9c
#define public_637cdab _public_637cdab
#define public_637cde8 _public_637cde8
#define public_637cdf8 _public_637cdf8
#define public_637ce10 _public_637ce10
#define public_637ce24 _public_637ce24

PROC_DECLARE(0x637c990, internal_637c990, public_637c990);
extern "C" NAKED register_t __cdecl internal_637c990()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        mov ecx, dword ptr ds : [public_658b804]
        imul ecx, dword ptr ds : [public_658b254]
        mov eax, dword ptr ds : [public_658b1a8]
        mov edx, dword ptr ds : [public_658b900]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        add ecx, 0x16A0
        push edx
        mov dword ptr ds : [public_658b948], eax
        mov dword ptr ds : [public_658b1a8], ebp
        mov dword ptr ds : [public_658bcf8], ecx
        mov dword ptr ds : [public_658bcf0], ebp
        mov dword ptr ds : [public_658bd00], ebp
        mov dword ptr ds : [public_658bd08], ebp
        mov dword ptr ds : [public_658b9f0], ebp
        mov dword ptr ds : [public_658b9f8], ebp
        mov dword ptr ds : [public_658b9fc], ebp
        mov dword ptr ds : [public_658be18], ebp
        mov dword ptr ds : [public_658bdf8], ebp
        mov dword ptr ds : [public_658be10], ebp
        mov dword ptr ds : [public_658be20], ebp
        mov dword ptr ds : [public_658be30], ebp
        mov dword ptr ds : [public_658be08], ebp
        mov dword ptr ds : [public_658be00], ebp
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b848]
        sub ecx, eax
        mov dword ptr ds : [public_658bfb0], ecx
        mov ecx, dword ptr ds : [public_658b0a8]
        add esp, 4
        cmp ecx, ebp
        jne public_637ca58
        cmp dword ptr ds : [public_658b018], ebp
        jne public_637ca58
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637cab0
        public_637ca58 : nop
        fld qword ptr ds : [public_658bcc8]
        fcomp qword ptr ds : [public_658b888]
        fnstsw ax
        test ah, 1
        je public_637ca81
        mov edx, dword ptr ds : [public_658b888]
        mov eax, dword ptr ds : [public_658b88c]
        mov dword ptr ds : [public_658bcc8], edx
        mov dword ptr ds : [public_658bccc], eax
        public_637ca81 : nop
        cmp ecx, ebp
        je public_637cab0
        fld qword ptr ds : [public_658bd78]
        fcomp qword ptr ds : [public_658b898]
        fnstsw ax
        test ah, 0x41
        jne public_637cab0
        mov ecx, dword ptr ds : [public_658b898]
        mov edx, dword ptr ds : [public_658b89c]
        mov dword ptr ds : [public_658bd78], ecx
        mov dword ptr ds : [public_658bd7c], edx
        public_637cab0 : nop
        mov eax, dword ptr ds : [public_658b810]
        cmp eax, ebp
        je public_637cacd
        mov ecx, 0xFFFFDFFF
        public_637cabe : nop
        cmp dword ptr ds : [eax+0x30], ebp
        je public_637cacd
        and dword ptr ds : [eax+0x50], ecx
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, ebp
        jne public_637cabe
        public_637cacd : nop
        cmp dword ptr ds : [public_658b050], ebp
        je public_637cb08
        mov ecx, dword ptr ds : [public_658b810]
        cmp ecx, ebp
        je public_637cb08
        public_637cadf : nop
        cmp dword ptr ds : [ecx+0x30], ebp
        je public_637cb08
        mov eax, dword ptr ds : [ecx+0x50]
        mov esi, dword ptr ds : [public_658b21c]
        mov edx, eax
        shr edx, 0x10
        and edx, 1
        cmp edx, esi
        je public_637cb01
        or eax, 0x2000
        mov dword ptr ds : [ecx+0x50], eax
        public_637cb01 : nop
        mov ecx, dword ptr ds : [ecx+0x30]
        cmp ecx, ebp
        jne public_637cadf
        public_637cb08 : nop
        mov esi, dword ptr ds : [public_658b810]
        cmp esi, ebp
        je public_637cd9c
        public_637cb16 : nop
        cmp dword ptr ds : [esi+0x30], ebp
        je public_637cd9c
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_637cb33
        cmp dword ptr ds : [public_658b8a0], ebp
        jne public_637cd91
        public_637cb33 : nop
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
        mov edi, eax
        call public_636ec10
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ebx, eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658bdf8]
        mov edx, dword ptr ds : [public_658be20]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [public_658bdf8], ecx
        mov ecx, dword ptr ds : [public_658bce0]
        add edx, edi
        cmp ecx, edi
        mov dword ptr ds : [public_658be20], edx
        jge public_637cb80
        mov dword ptr ds : [public_658bce0], edi
        public_637cb80 : nop
        mov edx, dword ptr ds : [public_658be10]
        mov ecx, dword ptr ds : [public_658bcb8]
        add edx, ebx
        cmp ecx, ebx
        mov dword ptr ds : [public_658be10], edx
        jge public_637cb9e
        mov dword ptr ds : [public_658bcb8], ebx
        public_637cb9e : nop
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [public_658be08]
        and ecx, 0x1FF
        add edx, ecx
        mov dword ptr ds : [public_658be08], edx
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [public_658be00]
        and ecx, 0x1FF
        cmp edx, ecx
        jge public_637cbce
        mov dword ptr ds : [public_658be00], ecx
        public_637cbce : nop
        cmp eax, ebp
        je public_637cbef
        mov edx, dword ptr ds : [public_658be18]
        mov ecx, dword ptr ds : [public_658bcd0]
        add edx, eax
        cmp ecx, eax
        mov dword ptr ds : [public_658be18], edx
        jge public_637cbef
        mov dword ptr ds : [public_658bcd0], eax
        public_637cbef : nop
        mov edx, dword ptr ds : [public_658b804]
        add ebx, edi
        lea ecx, ds:[edx+ebx*4+0x68]
        add dword ptr ds : [public_658bcf0], ecx
        cmp dword ptr ds : [esi+0x38], ebp
        je public_637cc28
        mov edx, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658bd00]
        add edx, 5
        imul edx, eax
        shl edx, 2
        shr edx, 1
        add edx, ecx
        lea eax, ds:[edx+eax*4+8]
        mov dword ptr ds : [public_658bd00], eax
        public_637cc28 : nop
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, ebp
        je public_637cc48
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658bcf8]
        lea edx, ds:[ecx+eax*4+8]
        add esp, 4
        mov dword ptr ds : [public_658bcf8], edx
        public_637cc48 : nop
        mov eax, dword ptr ds : [esi+0x44]
        cmp eax, ebp
        je public_637cc68
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658bcf8]
        lea edx, ds:[ecx+eax*4+8]
        add esp, 4
        mov dword ptr ds : [public_658bcf8], edx
        public_637cc68 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov ebx, 0x2000
        test ebx, eax
        jne public_637cd91
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x3C]
        or ecx, ebx
        cmp eax, ebp
        mov dword ptr ds : [esi+0x50], ecx
        je public_637cd10
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        cmp eax, ebp
        je public_637cd10
        public_637cc99 : nop
        cmp eax, 1
        je public_637cd07
        cmp eax, 2
        je public_637cd07
        test dword ptr ds : [eax+0x50], ebx
        jne public_637cd07
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, ebp
        je public_637cd07
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, ebp
        je public_637cd07
        push eax
        push ecx
        call public_6380c50
        fld qword ptr ds : [public_658b9f8]
        mov eax, dword ptr ds : [public_658b9f0]
        fadd st, st(1)
        add esp, 8
        inc eax
        fstp qword ptr ds : [public_658b9f8]
        mov dword ptr ds : [public_658b9f0], eax
        fld qword ptr ds : [public_658ba00]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_637ccee
        fst qword ptr ds : [public_658ba00]
        public_637ccee : nop
        fld qword ptr ds : [public_658ba08]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_637cd05
        fstp qword ptr ds : [public_658ba08]
        jmp public_637cd07
        public_637cd05 : nop
        fstp st(0)
        public_637cd07 : nop
        mov eax, dword ptr ds : [edi]
        add edi, 4
        cmp eax, ebp
        jne public_637cc99
        public_637cd10 : nop
        cmp dword ptr ds : [esi+0x18], ebp
        je public_637cd91
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebp
        je public_637cd91
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        cmp eax, ebp
        je public_637cd91
        public_637cd28 : nop
        inc dword ptr ds : [public_658bb80]
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        push edx
        call public_637fd60
        fld qword ptr ds : [public_658bf88]
        fcomp qword ptr ss : [esp+0x1C]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_637cd64
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658bf88], eax
        mov dword ptr ds : [public_658bf8c], ecx
        public_637cd64 : nop
        fld qword ptr ds : [public_658bf90]
        fcomp qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_637cd88
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658bf90], edx
        mov dword ptr ds : [public_658bf94], eax
        public_637cd88 : nop
        mov eax, dword ptr ds : [edi]
        add edi, 4
        cmp eax, ebp
        jne public_637cd28
        public_637cd91 : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, ebp
        jne public_637cb16
        public_637cd9c : nop
        mov esi, dword ptr ds : [public_658b838]
        cmp esi, ebp
        je public_637ce10
        mov edi, 0x8000000
        public_637cdab : nop
        cmp dword ptr ds : [esi], ebp
        je public_637ce24
        test dword ptr ds : [esi+0x14], edi
        jne public_637cdf8
        add dword ptr ds : [public_658bd08], 0x18
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebp
        je public_637cdf8
        push eax
        call public_636ec10
        mov edx, dword ptr ds : [public_658be30]
        mov ecx, dword ptr ds : [public_658bce8]
        add edx, eax
        add esp, 4
        cmp ecx, eax
        mov dword ptr ds : [public_658be30], edx
        jge public_637cde8
        mov dword ptr ds : [public_658bce8], eax
        public_637cde8 : nop
        mov ecx, dword ptr ds : [public_658bd08]
        lea edx, ds:[ecx+eax*4+0x18]
        mov dword ptr ds : [public_658bd08], edx
        public_637cdf8 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_637cdab
        mov eax, dword ptr ds : [public_658b948]
        mov dword ptr ds : [public_658b1a8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637ce10 : nop
        mov ecx, dword ptr ds : [public_658b948]
        mov dword ptr ds : [public_658b1a8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637ce24 : nop
        mov edx, dword ptr ds : [public_658b948]
        pop edi
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637c990)
    }
}

#undef public_637ca58
#undef public_637ca81
#undef public_637cab0
#undef public_637cabe
#undef public_637cacd
#undef public_637cadf
#undef public_637cb01
#undef public_637cb08
#undef public_637cb16
#undef public_637cb33
#undef public_637cb80
#undef public_637cb9e
#undef public_637cbce
#undef public_637cbef
#undef public_637cc28
#undef public_637cc48
#undef public_637cc68
#undef public_637cc99
#undef public_637ccee
#undef public_637cd05
#undef public_637cd07
#undef public_637cd10
#undef public_637cd28
#undef public_637cd64
#undef public_637cd88
#undef public_637cd91
#undef public_637cd9c
#undef public_637cdab
#undef public_637cde8
#undef public_637cdf8
#undef public_637ce10
#undef public_637ce24
