#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c249d0);

#define public_6c24a50 _public_6c24a50
#define public_6c24a7a _public_6c24a7a
#define public_6c24a82 _public_6c24a82
#define public_6c24a96 _public_6c24a96

PROC_DECLARE(0x6c249d0, internal_6c249d0, public_6c249d0);
extern "C" NAKED register_t __cdecl internal_6c249d0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        xor eax, eax
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c24a82
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+0x4C]
        dec ecx
        cmp eax, ecx
        mov ebx, eax
        jb public_6c24a50
        mov ebx, ecx
        public_6c24a50 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push ebx
        push ebp
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c24a96
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebx
        jne public_6c24a96
        mov ebx, 1
        mov byte ptr ds : [eax+ebp], 0
        public_6c24a7a : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        pop ebp
        public_6c24a82 : nop
        xor eax, eax
        test ebx, ebx
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        public_6c24a96 : nop
        xor ebx, ebx
        jmp public_6c24a7a
        UNREACHABLE_TRAP(0x6c249d0)
    }
}

#undef public_6c24a50
#undef public_6c24a7a
#undef public_6c24a82
#undef public_6c24a96
