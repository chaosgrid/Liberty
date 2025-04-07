#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f88500);
CLANG_FORWARD_PROC_SYMBOL(public_6f89230);
CLANG_FORWARD_PROC_SYMBOL(public_6f93370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0e2c);

#define public_6f88530 _public_6f88530
#define public_6f88545 _public_6f88545
#define public_6f88580 _public_6f88580
#define public_6f885b2 _public_6f885b2

PROC_DECLARE(0x6f88500, internal_6f88500, public_6f88500);
extern "C" NAKED register_t __cdecl internal_6f88500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0e2c @0x6f88502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0e2c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ebp, dword ptr ds : [edi+0x3C]
        mov ebx, dword ptr ds : [edi+0x38]
        xor esi, esi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f88545
        public_6f88530 : nop
        lea ecx, ds:[ebx+0x84]
        call public_6f93370
        add ebx, 0x98
        cmp ebx, ebp
        jne public_6f88530
        public_6f88545 : nop
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+0x38], esi
        mov dword ptr ds : [edi+0x3C], esi
        mov dword ptr ds : [edi+0x40], esi
        lea ecx, ds:[edi+0x1C]
        mov dword ptr ss : [esp+0x1C], 2
        call public_6f89230
        mov ebp, dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        mov byte ptr ss : [esp+0x1C], 1
        je public_6f885b2
        lea esp, ss:[esp]
        public_6f88580 : nop
        mov esi, ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+0x18], ecx
        jne public_6f88580
        xor esi, esi
        public_6f885b2 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0x14], esi
        mov dword ptr ds : [edi+0x18], esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb325c]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f88500)
    }
}

#undef public_6f88530
#undef public_6f88545
#undef public_6f88580
#undef public_6f885b2
