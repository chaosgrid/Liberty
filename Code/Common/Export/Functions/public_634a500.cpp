#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a500);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);

#define public_634a533 _public_634a533
#define public_634a556 _public_634a556

PROC_DECLARE(0x634a500, internal_634a500, public_634a500);
extern "C" NAKED register_t __cdecl internal_634a500()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], offset public_63a54b0
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x44], ebx
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        jne public_634a533
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push edi
        call public_634d530
        mov dword ptr ds : [edi+0x40], eax
        public_634a533 : nop
        mov ecx, dword ptr ds : [edi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_634a556
        mov edx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_634a556
        call public_634d640
        public_634a556 : nop
        mov ebp, dword ptr ds : [edi+0x40]
        lea edi, ds:[esi+4]
        push edi
        add ebx, 4
        push ebx
        mov ecx, ebp
        call public_634d860
        mov ecx, dword ptr ss : [esp+0x14]
        lea ebx, ds:[esi+0x34]
        add ecx, 0x34
        push ebx
        push ecx
        mov ecx, ebp
        call public_634d970
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx+0x44]
        fst dword ptr ds : [esi+0x4C]
        fld st(0)
        fmul dword ptr ds : [ebx+4]
        fadd dword ptr ds : [edi+4]
        fld st(1)
        fmul dword ptr ds : [ebx+8]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [ebx]
        fadd dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x2C], eax
        fstp dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        mov edx, ecx
        fld dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x1C], edx
        fstp dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ds : [esi+0x18]
        pop edi
        fld dword ptr ds : [esi+0x4C]
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmul dword ptr ds : [ebx+4]
        fadd dword ptr ds : [esi+0x18]
        fld st(1)
        fmul dword ptr ds : [ebx+8]
        fadd dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ebx]
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, esi
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ds : [esi+0x14]
        fstp dword ptr ds : [esi+0x18]
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634a500)
    }
}

#undef public_634a533
#undef public_634a556
