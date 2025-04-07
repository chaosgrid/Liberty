#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aca890);
CLANG_FORWARD_PROC_SYMBOL(public_6aca920);

#define public_6aca8dd _public_6aca8dd
#define public_6aca916 _public_6aca916

PROC_DECLARE(0x6aca890, internal_6aca890, public_6aca890);
extern "C" NAKED register_t __cdecl internal_6aca890()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [ebx*4+public_6ada800]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx*4+public_6add4cc]
        lea eax, ds:[ebx-1]
        cmp eax, 0xFFFFFFFF
        je public_6aca916
        sub ebx, eax
        push esi
        lea esi, ds:[eax+1]
        push edi
        lea ebx, ss:[ebp+ebx*4+4]
        lea edi, ds : [eax*4+public_6ada800]
        mov ebp, esi
        public_6aca8dd : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, ecx
        shr eax, 1
        add edx, eax
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ds : [ebx]
        shl eax, 1
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, esi
        shr edx, cl
        push edx
        push eax
        call public_6aca920
        sub edi, 4
        add ebx, 4
        dec esi
        dec ebp
        jne public_6aca8dd
        pop edi
        pop esi
        public_6aca916 : nop
        pop ebp
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6aca890)
    }
}

#undef public_6aca8dd
#undef public_6aca916
