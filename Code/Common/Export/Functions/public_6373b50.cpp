#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_6373b50);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6383f50);

#define public_6373b7f _public_6373b7f
#define public_6373b9b _public_6373b9b
#define public_6373baa _public_6373baa
#define public_6373bb2 _public_6373bb2
#define public_6373bea _public_6373bea
#define public_6373bf6 _public_6373bf6
#define public_6373c0e _public_6373c0e
#define public_6373c37 _public_6373c37
#define public_6373c3f _public_6373c3f
#define public_6373c42 _public_6373c42
#define public_6373c4b _public_6373c4b
#define public_6373c57 _public_6373c57
#define public_6373c5e _public_6373c5e
#define public_6373c64 _public_6373c64

PROC_DECLARE(0x6373b50, internal_6373b50, public_6373b50);
extern "C" NAKED register_t __cdecl internal_6373b50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        mov eax, dword ptr ds : [public_658b080]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        cmp eax, ebx
        mov eax, dword ptr ds : [public_658b084]
        push edi
        jne public_6373baa
        cmp eax, ebx
        jne public_6373bb2
        mov esi, dword ptr ds : [public_658b810]
        cmp esi, ebx
        je public_6373c64
        public_6373b7f : nop
        cmp dword ptr ds : [esi+0x30], ebx
        je public_6373c64
        mov ecx, dword ptr ds : [esi+0x44]
        cmp ecx, ebx
        lea eax, ds:[esi+0x44]
        je public_6373b9b
        push eax
        call public_636e740
        add esp, 4
        public_6373b9b : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, ebx
        jne public_6373b7f
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6373baa : nop
        cmp eax, ebx
        jne public_6373c64
        public_6373bb2 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        push ebx
        call public_6383f50
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_6373bea
        fild dword ptr ds : [public_658b24c]
        fsqrt 
        fmul qword ptr ds : [public_658b878]
        fsubr qword ptr ss : [esp+0x10]
        fstp qword ptr ss : [esp+0x10]
        public_6373bea : nop
        mov edi, dword ptr ds : [public_658b810]
        xor ebp, ebp
        cmp edi, ebx
        je public_6373c5e
        public_6373bf6 : nop
        cmp dword ptr ds : [edi+0x30], ebx
        je public_6373c5e
        mov eax, dword ptr ds : [edi+0x44]
        cmp eax, ebx
        je public_6373c57
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        cmp eax, ebx
        je public_6373c4b
        public_6373c0e : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push eax
        inc ebp
        call public_637fd60
        fld qword ptr ss : [esp+0x24]
        fcomp qword ptr ss : [esp+0x1C]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_6373c37
        cmp dword ptr ds : [public_658b084], ebx
        jne public_6373c42
        jmp public_6373c3f
        public_6373c37 : nop
        cmp dword ptr ds : [public_658b080], ebx
        jne public_6373c42
        public_6373c3f : nop
        mov dword ptr ds : [esi-4], ebx
        public_6373c42 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        cmp eax, ebx
        jne public_6373c0e
        public_6373c4b : nop
        mov edx, dword ptr ds : [edi+0x44]
        push edx
        call public_636e370
        add esp, 4
        public_6373c57 : nop
        mov edi, dword ptr ds : [edi+0x30]
        cmp edi, ebx
        jne public_6373bf6
        public_6373c5e : nop
        add dword ptr ds : [public_658ba68], ebp
        public_6373c64 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6373b50)
    }
}

#undef public_6373b7f
#undef public_6373b9b
#undef public_6373baa
#undef public_6373bb2
#undef public_6373bea
#undef public_6373bf6
#undef public_6373c0e
#undef public_6373c37
#undef public_6373c3f
#undef public_6373c42
#undef public_6373c4b
#undef public_6373c57
#undef public_6373c5e
#undef public_6373c64
