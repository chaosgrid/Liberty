#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6385600);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_6385623 _public_6385623
#define public_638563f _public_638563f
#define public_6385654 _public_6385654
#define public_638565d _public_638565d
#define public_638567d _public_638567d
#define public_6385693 _public_6385693
#define public_63856ad _public_63856ad
#define public_63856b8 _public_63856b8
#define public_63856d5 _public_63856d5
#define public_63856e6 _public_63856e6
#define public_63856fb _public_63856fb
#define public_6385704 _public_6385704
#define public_6385724 _public_6385724
#define public_638573a _public_638573a
#define public_6385754 _public_6385754
#define public_6385761 _public_6385761

PROC_DECLARE(0x6385600, internal_6385600, public_6385600);
extern "C" NAKED register_t __cdecl internal_6385600()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        xor ebp, ebp
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebp
        je public_63856b8
        public_6385623 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63856b8
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_638563f
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_6385654
        public_638563f : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_638565d
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        je public_638565d
        public_6385654 : nop
        mov dword ptr ds : [esi+0x48], 0
        jmp public_63856ad
        public_638565d : nop
        mov eax, dword ptr ds : [esi+0x3C]
        inc ebx
        push eax
        mov dword ptr ds : [esi+0x48], ebx
        call public_636ec10
        add ebp, eax
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 4
        test ah, 0x10
        je public_638567d
        inc dword ptr ss : [esp+0x10]
        jmp public_6385693
        public_638567d : nop
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        public_6385693 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_63856ad
        push eax
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        public_63856ad : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6385623
        public_63856b8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6385761
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6385761
        public_63856d5 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_63856e6
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_63856fb
        public_63856e6 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_6385704
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        je public_6385704
        public_63856fb : nop
        mov dword ptr ds : [esi+0x48], 0
        jmp public_6385754
        public_6385704 : nop
        mov edx, dword ptr ds : [esi+0x3C]
        inc ebx
        push edx
        mov dword ptr ds : [esi+0x48], ebx
        call public_636ec10
        add ebp, eax
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 4
        test ah, 0x10
        je public_6385724
        inc dword ptr ss : [esp+0x10]
        jmp public_638573a
        public_6385724 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        public_638573a : nop
        mov esi, dword ptr ds : [esi+0x44]
        test esi, esi
        je public_6385754
        push esi
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6385754 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_63856d5
        public_6385761 : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ds:[ecx+ebx+1]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [public_658b8e0], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ss : [esp+0x38]
        pop esi
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6385600)
    }
}

#undef public_6385623
#undef public_638563f
#undef public_6385654
#undef public_638565d
#undef public_638567d
#undef public_6385693
#undef public_63856ad
#undef public_63856b8
#undef public_63856d5
#undef public_63856e6
#undef public_63856fb
#undef public_6385704
#undef public_6385724
#undef public_638573a
#undef public_6385754
#undef public_6385761
