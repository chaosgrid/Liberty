#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62692df _public_62692df
#define public_62692e7 _public_62692e7
#define public_62692f9 _public_62692f9
#define public_6269318 _public_6269318
#define public_626932c _public_626932c
#define public_6269364 _public_6269364
#define public_6269377 _public_6269377

PROC_DECLARE(0x62692d0, internal_62692d0, public_62692d0);
extern "C" NAKED register_t __cdecl internal_62692d0()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62692df
        xor ecx, ecx
        jmp public_62692e7
        public_62692df : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 5
        public_62692e7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp ecx, eax
        jae public_6269377
        test eax, eax
        jge public_62692f9
        xor eax, eax
        public_62692f9 : nop
        push ebx
        push ebp
        shl eax, 5
        push esi
        push eax
        call public_6391d9c
        mov ebp, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_626932c
        public_6269318 : nop
        push esi
        push ebx
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add ebx, 0x20
        cmp esi, ebp
        jne public_6269318
        public_626932c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        shl eax, 5
        pop esi
        add eax, edx
        test ecx, ecx
        pop ebp
        mov dword ptr ds : [edi+0xC], eax
        pop ebx
        jne public_6269364
        xor eax, eax
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], edx
        pop edi
        pop ecx
        ret 4
        public_6269364 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 5
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], edx
        public_6269377 : nop
        pop edi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62692d0)
    }
}

#undef public_62692df
#undef public_62692e7
#undef public_62692f9
#undef public_6269318
#undef public_626932c
#undef public_6269364
#undef public_6269377
