#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344b50);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397a83);

#define public_6344b86 _public_6344b86
#define public_6344b95 _public_6344b95
#define public_6344bb2 _public_6344bb2
#define public_6344bb9 _public_6344bb9

PROC_DECLARE(0x6344b50, internal_6344b50, public_6344b50);
extern "C" NAKED register_t __cdecl internal_6344b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397a83 @0x6344b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397a83
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_63a5428
        xor edi, edi
        mov di, word ptr ds : [esi+0x12]
        mov dword ptr ss : [esp+0x18], 1
        dec edi
        js public_6344b95
        public_6344b86 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        dec edi
        jns public_6344b86
        public_6344b95 : nop
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        lea ecx, ds:[esi+0x18]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], bl
        je public_6344bb9
        cmp eax, ebx
        je public_6344bb2
        push eax
        call public_6343fb0
        add esp, 4
        public_6344bb2 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_6344bb9 : nop
        mov word ptr ds : [esi+0x12], bx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_63a5430
        call public_63522f0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6344b50)
    }
}

#undef public_6344b86
#undef public_6344b95
#undef public_6344bb2
#undef public_6344bb9
