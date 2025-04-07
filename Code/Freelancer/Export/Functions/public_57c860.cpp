#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c860);
CLANG_FORWARD_PROC_SYMBOL(public_57f820);
CLANG_FORWARD_PROC_SYMBOL(public_57faa0);

#define public_57c890 _public_57c890
#define public_57c8a4 _public_57c8a4
#define public_57c8b9 _public_57c8b9
#define public_57c8bc _public_57c8bc
#define public_57c8c0 _public_57c8c0
#define public_57c8d1 _public_57c8d1
#define public_57c8e3 _public_57c8e3
#define public_57c8ec _public_57c8ec
#define public_57c8fe _public_57c8fe
#define public_57c902 _public_57c902
#define public_57c909 _public_57c909
#define public_57c913 _public_57c913

PROC_DECLARE(0x57c860, internal_57c860, public_57c860);
extern "C" NAKED register_t __cdecl internal_57c860()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0xC
        test edx, edx
        je public_57c913
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_57c913
        push ebx
        push ebp
        push esi
        push edi
        lea ebx, ds:[ecx+0x514]
        lea ebp, ds:[edx+eax*2]
        mov dword ptr ss : [esp+0x24], eax
        lea esp, ss:[esp]
        public_57c890 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ebx+8]
        sub ebp, 2
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_57c8c0
        public_57c8a4 : nop
        mov ax, word ptr ss : [ebp]
        cmp ax, word ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_57c8b9
        mov esi, dword ptr ds : [esi]
        jmp public_57c8bc
        public_57c8b9 : nop
        mov esi, dword ptr ds : [esi+8]
        public_57c8bc : nop
        cmp esi, edx
        jne public_57c8a4
        public_57c8c0 : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_57c8d1
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        jmp public_57c902
        public_57c8d1 : nop
        test al, al
        mov dword ptr ss : [esp+0x20], edi
        je public_57c8ec
        cmp edi, dword ptr ds : [ecx]
        jne public_57c8e3
        lea ecx, ss:[esp+0x14]
        jmp public_57c8fe
        public_57c8e3 : nop
        lea ecx, ss:[esp+0x20]
        call public_57faa0
        public_57c8ec : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ax, word ptr ds : [edx+0xC]
        cmp ax, word ptr ss : [ebp]
        jae public_57c909
        lea ecx, ss:[esp+0x18]
        public_57c8fe : nop
        push ebp
        push edi
        push esi
        push ecx
        public_57c902 : nop
        mov ecx, ebx
        call public_57f820
        public_57c909 : nop
        dec dword ptr ss : [esp+0x24]
        jne public_57c890
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_57c913 : nop
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x57c860)
    }
}

#undef public_57c890
#undef public_57c8a4
#undef public_57c8b9
#undef public_57c8bc
#undef public_57c8c0
#undef public_57c8d1
#undef public_57c8e3
#undef public_57c8ec
#undef public_57c8fe
#undef public_57c902
#undef public_57c909
#undef public_57c913
