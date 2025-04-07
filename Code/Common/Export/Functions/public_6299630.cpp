#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629a4c0);

#define public_6299645 _public_6299645
#define public_6299651 _public_6299651
#define public_6299660 _public_6299660
#define public_62996d2 _public_62996d2

PROC_DECLARE(0x6299630, internal_6299630, public_6299630);
extern "C" NAKED register_t __cdecl internal_6299630()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x54]
        lea eax, ds:[ebx+0x54]
        push ebp
        xor ebp, ebp
        cmp ecx, 0xFFFFFFFF
        push esi
        je public_6299651
        public_6299645 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        add eax, 0x34
        inc ebp
        cmp ecx, 0xFFFFFFFF
        jne public_6299645
        public_6299651 : nop
        xor esi, esi
        test ebp, ebp
        jbe public_62996d2
        push edi
        mov edi, dword ptr ss : [esp+0x58]
        lea esp, ss:[esp]
        public_6299660 : nop
        mov edx, dword ptr ds : [edi+8]
        mov ax, word ptr ds : [public_63a4aa4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov word ptr ss : [esp+0x5C], ax
        call public_629a4c0
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ebx]
        push ecx
        push esi
        sub edx, 0x44
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0xA8]
        inc esi
        cmp esi, ebp
        jb public_6299660
        pop edi
        public_62996d2 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6299630)
    }
}

#undef public_6299645
#undef public_6299651
#undef public_6299660
#undef public_62996d2
