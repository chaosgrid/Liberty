#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63478f0);
CLANG_FORWARD_PROC_SYMBOL(public_6349400);
CLANG_FORWARD_PROC_SYMBOL(public_6349460);
CLANG_FORWARD_PROC_SYMBOL(public_63495e0);
CLANG_FORWARD_PROC_SYMBOL(public_634b5e0);

#define public_634960f _public_634960f
#define public_634964c _public_634964c
#define public_6349655 _public_6349655
#define public_6349663 _public_6349663
#define public_6349690 _public_6349690

PROC_DECLARE(0x63495e0, internal_63495e0, public_63495e0);
extern "C" NAKED register_t __cdecl internal_63495e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0xF8]
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+0xFC]
        xor edi, edi
        mov di, word ptr ds : [ebx+0xE]
        mov ebp, 3
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        dec edi
        js public_634964c
        public_634960f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx+edi*4]
        push eax
        push ecx
        mov ecx, esi
        call public_63478f0
        mov edx, dword ptr ds : [esi+0x60]
        mov ecx, edx
        xor ecx, eax
        and ecx, 0xFF
        xor ecx, edx
        mov dword ptr ds : [esi+0x60], ecx
        shl ecx, 0x18
        sar ecx, 0x18
        and ebp, ecx
        dec edi
        jns public_634960f
        cmp ebp, 3
        jne public_6349690
        mov esi, dword ptr ss : [esp+0x1C]
        public_634964c : nop
        xor edi, edi
        mov di, word ptr ds : [ebx+0xE]
        dec edi
        js public_6349663
        public_6349655 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [edx+edi*4]
        call public_634b5e0
        dec edi
        jns public_6349655
        public_6349663 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6349460
        mov eax, dword ptr ds : [ebx]
        and eax, 0xFFFFFF08
        or eax, 8
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6349400
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 4
        public_6349690 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x63495e0)
    }
}

#undef public_634960f
#undef public_634964c
#undef public_6349655
#undef public_6349663
#undef public_6349690
