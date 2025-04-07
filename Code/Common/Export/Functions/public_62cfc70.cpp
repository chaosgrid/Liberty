#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cfcd3 _public_62cfcd3
#define public_62cfcd5 _public_62cfcd5
#define public_62cfcdf _public_62cfcdf
#define public_62cfd3f _public_62cfd3f
#define public_62cfd41 _public_62cfd41
#define public_62cfd4d _public_62cfd4d
#define public_62cfdb0 _public_62cfdb0
#define public_62cfdbb _public_62cfdbb
#define public_62cfdcf _public_62cfdcf
#define public_62cfde4 _public_62cfde4
#define public_62cfde9 _public_62cfde9
#define public_62cfded _public_62cfded

PROC_DECLARE(0x62cfc70, internal_62cfc70, public_62cfc70);
extern "C" NAKED register_t __cdecl internal_62cfc70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ds : [eax+0x17C]
        push esi
        mov dword ptr ss : [ebp+0x60], ecx
        mov edx, dword ptr ds : [eax+0x1B8]
        push edi
        mov dword ptr ss : [ebp+0x64], edx
        lea edi, ss:[ebp+0x68]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0x1C
        rep movsd
        lea edi, ss:[ebp+0xD8]
        lea esi, ds:[ebx+0x7C]
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x24]
        lea eax, ss:[ebp+0x84]
        push eax
        add ecx, 0x34
        mov byte ptr ss : [esp+0x17], 1
        call public_62e74a0
        test eax, eax
        lea ecx, ss:[ebp+0xFC]
        je public_62cfcd3
        add eax, 8
        jmp public_62cfcd5
        public_62cfcd3 : nop
        xor eax, eax
        public_62cfcd5 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62cfcdf
        push eax
        call public_6341610
        public_62cfcdf : nop
        mov ecx, dword ptr ds : [ebx+0xA4]
        mov dword ptr ss : [ebp+0x104], ecx
        mov edx, dword ptr ds : [ebx+0xA8]
        mov dword ptr ss : [ebp+0x11C], edx
        fild dword ptr ds : [ebx+0xAC]
        fstp dword ptr ss : [ebp+0x110]
        mov eax, dword ptr ds : [ebx+0xB0]
        mov dword ptr ss : [ebp+0x118], eax
        mov ecx, dword ptr ds : [ebx+0xB4]
        lea eax, ds:[ebx+0x68]
        mov dword ptr ss : [ebp+0x114], ecx
        cmp dword ptr ds : [eax], 0
        je public_62cfde9
        mov ecx, dword ptr ss : [ebp+0x24]
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea esi, ss:[ebp+0x2C]
        je public_62cfd3f
        add eax, 8
        jmp public_62cfd41
        public_62cfd3f : nop
        xor eax, eax
        public_62cfd41 : nop
        cmp eax, dword ptr ds : [esi]
        je public_62cfd4d
        push eax
        mov ecx, esi
        call public_6341610
        public_62cfd4d : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62cfde4
        lea eax, ds:[esi-8]
        test eax, eax
        je public_62cfde4
        mov edx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x3C], edx
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x40], eax
        fld dword ptr ds : [ebx+0x98]
        fld dword ptr ds : [ebx+0x94]
        fld dword ptr ds : [ebx+0x90]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62cfdb0
        fadd dword ptr ds : [public_639fb58]
        fstp dword ptr ss : [ebp+0x44]
        jmp public_62cfdbb
        public_62cfdb0 : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        fstp st(0)
        mov dword ptr ss : [ebp+0x44], ecx
        public_62cfdbb : nop
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x68]
        push eax
        call dword ptr ds : [edx+0x28]
        test al, al
        jne public_62cfdcf
        mov byte ptr ss : [esp+0x13], al
        public_62cfdcf : nop
        mov ecx, dword ptr ss : [ebp+0x64]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0xD8]
        push eax
        call dword ptr ds : [edx+0x28]
        test al, al
        jne public_62cfde9
        jmp public_62cfded
        public_62cfde4 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_62cfde9 : nop
        mov al, byte ptr ss : [esp+0x13]
        public_62cfded : nop
        mov ecx, dword ptr ds : [ebx+0xB8]
        mov dword ptr ss : [ebp+0x34], ecx
        mov dl, byte ptr ds : [ebx+0xA0]
        mov cl, byte ptr ss : [ebp+0x28]
        mov byte ptr ss : [ebp+0x38], dl
        mov dl, al
        shl dl, 1
        xor dl, cl
        pop edi
        and dl, 2
        xor dl, cl
        pop esi
        mov byte ptr ss : [ebp+0x28], dl
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62cfc70)
    }
}

#undef public_62cfcd3
#undef public_62cfcd5
#undef public_62cfcdf
#undef public_62cfd3f
#undef public_62cfd41
#undef public_62cfd4d
#undef public_62cfdb0
#undef public_62cfdbb
#undef public_62cfdcf
#undef public_62cfde4
#undef public_62cfde9
#undef public_62cfded
