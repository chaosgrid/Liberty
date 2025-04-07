#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60db3);

#define public_6cfd186 _public_6cfd186
#define public_6cfd188 _public_6cfd188

PROC_DECLARE(0x6cfd110, internal_6cfd110, public_6cfd110);
extern "C" NAKED register_t __cdecl internal_6cfd110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60db3 @0x6cfd112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60db3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        push 0x2C
        mov edi, ecx
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6cfd186
        mov ecx, 0xBF800000
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x14], cl
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x18], 1
        call dword ptr ds : [public_6d6453c]
        mov dword ptr ds : [esi], offset public_6d66bac
        jmp public_6cfd188
        public_6cfd186 : nop
        xor esi, esi
        public_6cfd188 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cfd110)
    }
}

#undef public_6cfd186
#undef public_6cfd188
