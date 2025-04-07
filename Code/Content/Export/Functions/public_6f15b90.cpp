#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f15bf0 _public_6f15bf0
#define public_6f15bf9 _public_6f15bf9
#define public_6f15c00 _public_6f15c00
#define public_6f15c20 _public_6f15c20
#define public_6f15c24 _public_6f15c24
#define public_6f15c29 _public_6f15c29
#define public_6f15c2d _public_6f15c2d
#define public_6f15c42 _public_6f15c42
#define public_6f15c45 _public_6f15c45
#define public_6f15c62 _public_6f15c62
#define public_6f15c64 _public_6f15c64

PROC_DECLARE(0x6f15b90, internal_6f15b90, public_6f15b90);
extern "C" NAKED register_t __cdecl internal_6f15b90()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        lea eax, ds:[ebx+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], ebx
        xor esi, esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f15c62
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f15c62
        mov ebp, dword ptr ss : [esp+0x18]
        push ebp
        mov ecx, ebx
        call public_6f15940
        test eax, 0x3FFFFFFF
        jne public_6f15c64
        mov edx, dword ptr ds : [ebx+0xD4]
        push edi
        mov edi, dword ptr ds : [edx]
        xor eax, eax
        cmp edi, edx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f15c45
        add ebp, 4
        lea ecx, ds:[ecx]
        public_6f15bf0 : nop
        test ebp, ebp
        jne public_6f15bf9
        mov eax, dword ptr ds : [edi+8]
        jmp public_6f15c2d
        public_6f15bf9 : nop
        mov esi, ebp
        lea eax, ds:[edi+0xC]
        mov edi, edi
        public_6f15c00 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f15c24
        test cl, cl
        je public_6f15c20
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f15c24
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f15c00
        public_6f15c20 : nop
        xor eax, eax
        jmp public_6f15c29
        public_6f15c24 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f15c29 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f15c2d : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f15c42
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6f15bf0
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_6f15c45
        public_6f15c42 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        public_6f15c45 : nop
        test eax, 0x3FFFFFFF
        mov ebp, dword ptr ss : [esp+0x1C]
        pop edi
        jne public_6f15c64
        push ebp
        mov ecx, ebx
        call public_6f159f0
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f15c62 : nop
        mov eax, esi
        public_6f15c64 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f15b90)
    }
}

#undef public_6f15bf0
#undef public_6f15bf9
#undef public_6f15c00
#undef public_6f15c20
#undef public_6f15c24
#undef public_6f15c29
#undef public_6f15c2d
#undef public_6f15c42
#undef public_6f15c45
#undef public_6f15c62
#undef public_6f15c64
