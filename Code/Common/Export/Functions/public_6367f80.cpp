#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63678c0);
CLANG_FORWARD_PROC_SYMBOL(public_6367960);
CLANG_FORWARD_PROC_SYMBOL(public_6367bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6367d00);
CLANG_FORWARD_PROC_SYMBOL(public_6367f80);
CLANG_FORWARD_PROC_SYMBOL(public_63680e0);
CLANG_FORWARD_PROC_SYMBOL(public_6368130);
CLANG_FORWARD_PROC_SYMBOL(public_6368260);

#define public_6367fab _public_6367fab
#define public_6367fdc _public_6367fdc
#define public_6367ff3 _public_6367ff3
#define public_6368023 _public_6368023
#define public_636802f _public_636802f
#define public_636805c _public_636805c
#define public_6368067 _public_6368067
#define public_6368087 _public_6368087
#define public_6368092 _public_6368092
#define public_63680bf _public_63680bf
#define public_63680c2 _public_63680c2

PROC_DECLARE(0x6367f80, internal_6367f80, public_6367f80);
extern "C" NAKED register_t __cdecl internal_6367f80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        push edi
        dec eax
        push eax
        push ebx
        call public_63680e0
        mov ecx, dword ptr ds : [esi+0x28]
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call public_6368130
        mov edi, dword ptr ds : [esi+0x28]
        sub edi, 2
        cmp edi, ebx
        jle public_6367ff3
        public_6367fab : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+8]
        imul edx, edi
        add edx, ebx
        fld dword ptr ds : [eax+edx*4]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6367fdc
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0x28]
        push ecx
        push edi
        dec edx
        push edx
        mov ecx, esi
        call public_6368260
        public_6367fdc : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+8]
        imul eax, edi
        add eax, ebx
        dec edi
        cmp edi, ebx
        mov dword ptr ds : [ecx+eax*4], 0
        jg public_6367fab
        public_6367ff3 : nop
        push ebx
        mov ecx, esi
        call public_6367960
        cmp eax, 1
        je public_6368023
        mov edx, dword ptr ds : [esi+0x28]
        push 0xBF800000
        push ebx
        dec edx
        push edx
        mov ecx, esi
        call public_6368260
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+8]
        inc eax
        imul eax, ebx
        mov dword ptr ds : [ecx+eax*4], 0x3F800000
        public_6368023 : nop
        mov eax, dword ptr ds : [esi+0x28]
        lea ecx, ds:[eax-1]
        cmp ebx, ecx
        mov edi, ebx
        jge public_6368067
        public_636802f : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+8]
        imul edx, ecx
        add edx, edi
        fld dword ptr ds : [eax+edx*4]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_636805c
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6367bb0
        public_636805c : nop
        mov eax, dword ptr ds : [esi+0x28]
        inc edi
        lea ecx, ds:[eax-1]
        cmp edi, ecx
        jl public_636802f
        public_6368067 : nop
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        push eax
        mov ecx, esi
        call public_63678c0
        cmp eax, 1
        je public_6368087
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        pop edi
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_6368087 : nop
        mov edi, dword ptr ds : [esi+0x28]
        dec edi
        lea ebx, ds:[edi-1]
        test ebx, ebx
        jl public_63680c2
        public_6368092 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+4]
        imul ecx, ebx
        add ecx, edi
        fld dword ptr ds : [edx+ecx*4]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_63680bf
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        push edi
        mov ecx, esi
        call public_6367d00
        public_63680bf : nop
        dec ebx
        jns public_6368092
        public_63680c2 : nop
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        pop edi
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        mov eax, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6367f80)
    }
}

#undef public_6367fab
#undef public_6367fdc
#undef public_6367ff3
#undef public_6368023
#undef public_636802f
#undef public_636805c
#undef public_6368067
#undef public_6368087
#undef public_6368092
#undef public_63680bf
#undef public_63680c2
