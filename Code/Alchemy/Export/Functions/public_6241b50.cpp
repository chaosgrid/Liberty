#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6241cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6241cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6241d50);
CLANG_FORWARD_PROC_SYMBOL(public_6241de0);
CLANG_FORWARD_PROC_SYMBOL(public_6241e80);
CLANG_FORWARD_PROC_SYMBOL(public_6241f10);
CLANG_FORWARD_PROC_SYMBOL(public_6241fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6242070);
CLANG_FORWARD_PROC_SYMBOL(public_6242080);
CLANG_FORWARD_PROC_SYMBOL(public_6242100);
CLANG_FORWARD_PROC_SYMBOL(public_6242190);
CLANG_FORWARD_PROC_SYMBOL(public_6242230);
CLANG_FORWARD_PROC_SYMBOL(public_62422b0);
CLANG_FORWARD_PROC_SYMBOL(public_6242360);

#define public_6241bb3 _public_6241bb3
#define public_6241c04 _public_6241c04
#define public_6241c2d _public_6241c2d

PROC_DECLARE(0x6241b50, internal_6241b50, public_6241b50);
extern "C" NAKED register_t __cdecl internal_6241b50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], esi
        mov al, byte ptr ds : [public_6257be0]
        test al, 1
        jne public_6241bb3
        or al, 1
        mov dword ptr ds : [public_6257be4], offset _public_6241cc0
        mov byte ptr ds : [public_6257be0], al
        mov dword ptr ds : [public_6257be8], offset _public_6241cd0
        mov dword ptr ds : [public_6257bec], offset _public_6241d50
        mov dword ptr ds : [public_6257bf0], offset _public_6241de0
        mov dword ptr ds : [public_6257bf4], offset _public_6241e80
        mov dword ptr ds : [public_6257bf8], offset _public_6241f10
        mov dword ptr ds : [public_6257bfc], offset _public_6241fc0
        public_6241bb3 : nop
        test al, 2
        jne public_6241c04
        or al, 2
        mov dword ptr ds : [public_6257c00], offset _public_6242070
        mov byte ptr ds : [public_6257be0], al
        mov dword ptr ds : [public_6257c04], offset _public_6242080
        mov dword ptr ds : [public_6257c08], offset _public_6242100
        mov dword ptr ds : [public_6257c0c], offset _public_6242190
        mov dword ptr ds : [public_6257c10], offset _public_6242230
        mov dword ptr ds : [public_6257c14], offset _public_62422b0
        mov dword ptr ds : [public_6257c18], offset _public_6242360
        public_6241c04 : nop
        push ebx
        mov eax, 1
        cpuid 
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ss : [esp+0x14]
        pop ebx
        test eax, 0x2000000
        je public_6241c2d
        mov eax, dword ptr ds : [esi*4+public_6257c00]
        mov dword ptr ds : [edi+0x24], eax
        pop edi
        xor eax, eax
        pop esi
        ret 8
        public_6241c2d : nop
        mov ecx, dword ptr ds : [esi*4+public_6257be4]
        xor eax, eax
        mov dword ptr ds : [edi+0x24], ecx
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6241b50)
    }
}

#undef public_6241bb3
#undef public_6241c04
#undef public_6241c2d
