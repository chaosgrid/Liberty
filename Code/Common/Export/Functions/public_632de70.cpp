#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_632de70);

#define public_632dea0 _public_632dea0
#define public_632dec0 _public_632dec0

PROC_DECLARE(0x632de70, internal_632de70, public_632de70);
extern "C" NAKED register_t __cdecl internal_632de70()
{
    __asm
    {
        push ebx
        mov al, 1
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+0xA], al
        mov byte ptr ds : [esi+0x14], al
        push edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+9], bl
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        lea eax, ds:[esi+0x98]
        mov ecx, 0x20
        nop 
        public_632dea0 : nop
        mov dword ptr ds : [eax-0x80], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec ecx
        jne public_632dea0
        mov dword ptr ds : [esi+0x118], ebx
        lea eax, ds:[esi+0x19C]
        mov ecx, 0x20
        lea esp, ss:[esp]
        public_632dec0 : nop
        mov dword ptr ds : [eax-0x80], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec ecx
        jne public_632dec0
        lea edi, ds:[esi+0x22C]
        mov ecx, edi
        mov dword ptr ds : [esi+0x21C], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x224], ebx
        mov dword ptr ds : [esi+0x228], ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x244]
        mov ecx, edi
        call public_630e270
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x25C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632de70)
    }
}

#undef public_632dea0
#undef public_632dec0
