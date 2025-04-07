#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_635f020);
CLANG_FORWARD_PROC_SYMBOL(public_635fe30);

#define public_635fe59 _public_635fe59
#define public_635fe82 _public_635fe82
#define public_635fe9e _public_635fe9e
#define public_635fec7 _public_635fec7

PROC_DECLARE(0x635fe30, internal_635fe30, public_635fe30);
extern "C" NAKED register_t __cdecl internal_635fe30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x10]
        push esi
        mov esi, dword ptr ds : [eax+0x28]
        push edi
        mov edi, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_635fe59
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_635fe59 : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_635fe82
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_635fe82
        call public_634d640
        public_635fe82 : nop
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        mov esi, dword ptr ds : [esi+0x40]
        jne public_635fe9e
        mov ecx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [ecx+0x94]
        push edi
        call public_634d530
        mov dword ptr ds : [edi+0x40], eax
        public_635fe9e : nop
        mov eax, dword ptr ds : [edi+0x40]
        inc dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_635fec7
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x40]
        mov edx, dword ptr ds : [eax+0x110]
        cmp edx, dword ptr ds : [ecx]
        jle public_635fec7
        call public_634d640
        public_635fec7 : nop
        mov edi, dword ptr ds : [edi+0x40]
        push edi
        push esi
        mov ecx, ebx
        mov dword ptr ds : [ebx+0x28], 0
        call public_635f020
        dec dword ptr ds : [esi+4]
        dec dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x635fe30)
    }
}

#undef public_635fe59
#undef public_635fe82
#undef public_635fe9e
#undef public_635fec7
