#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320110);
CLANG_FORWARD_PROC_SYMBOL(public_6323240);
CLANG_FORWARD_PROC_SYMBOL(public_6323850);
CLANG_FORWARD_PROC_SYMBOL(public_63238a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396d38);

#define public_6320120 _public_6320120
#define public_6320181 _public_6320181
#define public_6320186 _public_6320186
#define public_63201a7 _public_63201a7
#define public_63201ef _public_63201ef

PROC_DECLARE(0x6320110, internal_6320110, public_6320110);
extern "C" NAKED register_t __cdecl internal_6320110()
{
    __asm
    {
        mov ecx, offset public_64018c4
        jmp public_6320120
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6320120 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6396d38 @0x6320122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396d38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0xC], eax
        je public_6320181
        mov ecx, eax
        cmp eax, ecx
        jne public_6320181
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6323850
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_63201a7
        public_6320181 : nop
        cmp eax, edi
        je public_63201a7
        push ebx
        public_6320186 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63238a0
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6323240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6320186
        pop ebx
        public_63201a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [public_6401818]
        mov edi, dword ptr ds : [public_63990ec]
        push ecx
        push 1
        push edx
        call edi
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [public_6401818]
        push 1
        push ecx
        call edi
        mov dword ptr ds : [esi+8], ebp
        dec dword ptr ds : [public_640193c]
        jne public_63201ef
        mov edx, dword ptr ds : [public_6401818]
        push edx
        call dword ptr ds : [public_63990e4]
        mov dword ptr ds : [public_6401818], ebp
        public_63201ef : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6320110)
    }
}

#undef public_6320120
#undef public_6320181
#undef public_6320186
#undef public_63201a7
#undef public_63201ef
