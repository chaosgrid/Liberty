#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6349180);
CLANG_FORWARD_PROC_SYMBOL(public_634b9d0);

#define public_634b9e9 _public_634b9e9
#define public_634ba16 _public_634ba16
#define public_634ba44 _public_634ba44

PROC_DECLARE(0x634b9d0, internal_634b9d0, public_634b9d0);
extern "C" NAKED register_t __cdecl internal_634b9d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ax, word ptr ds : [esi+0x26]
        cmp ax, word ptr ds : [esi+0x24]
        push edi
        lea edi, ds:[esi+0x24]
        jb public_634b9e9
        mov ecx, edi
        call public_63441a0
        public_634b9e9 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ds : [edi+2]
        test byte ptr ds : [ebx], 0xC
        jne public_634ba44
        mov ax, word ptr ds : [esi+0x2E]
        cmp ax, word ptr ds : [esi+0x2C]
        lea edi, ds:[esi+0x2C]
        jb public_634ba16
        mov ecx, edi
        call public_63441a0
        public_634ba16 : nop
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        lea eax, ds:[esi+8]
        push eax
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ds : [edi+2]
        mov ecx, ebx
        call public_6349180
        push esi
        mov ecx, ebx
        call public_6349180
        lea ecx, ds:[esi+0x10]
        push ecx
        mov ecx, ebx
        call public_6349180
        public_634ba44 : nop
        inc word ptr ds : [esi+0x3C]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b9d0)
    }
}

#undef public_634b9e9
#undef public_634ba16
#undef public_634ba44
