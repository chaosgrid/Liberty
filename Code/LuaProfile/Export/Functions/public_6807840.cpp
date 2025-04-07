#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68069d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807840);
CLANG_FORWARD_PROC_SYMBOL(public_6807890);

PROC_DECLARE(0x6807840, internal_6807840, public_6807840);
extern "C" NAKED register_t __cdecl internal_6807840()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x14]
/*FIXUP push offset public_680dc28 @0x6807851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc28
        push 0xC8
        lea ecx, ds:[eax+ebx+1]
        push ecx
        push edi
        call public_6807890
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        add edx, ebx
        mov dword ptr ds : [esi+edx*4+0x124], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        push ecx
        push eax
        push esi
        call public_68069d0
        add esp, 0x1C
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807840)
    }
}
