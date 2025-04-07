#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352320);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);

#define public_63523f5 _public_63523f5
#define public_6352422 _public_6352422
#define public_6352449 _public_6352449
#define public_635245d _public_635245d

PROC_DECLARE(0x63523d0, internal_63523d0, public_63523d0);
extern "C" NAKED register_t __cdecl internal_63523d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        and ecx, 0xFFFFFF
        shl ecx, 1
        cmp ecx, eax
        push edi
        jle public_63523f5
        lea edx, ds:[eax+eax+2]
        push edx
        mov ecx, esi
        call public_6352320
        public_63523f5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+1]
        xor edx, eax
        and edx, 0xFFFFFF
        xor edx, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, edi
        and ecx, ebp
        lea eax, ds:[eax+ecx*8]
        mov dword ptr ds : [esi+8], edx
        mov ebx, dword ptr ds : [eax+4]
        test ebx, ebx
        mov ebp, ecx
        je public_635245d
        public_6352422 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        and edx, edi
        cmp ecx, edx
        jge public_6352449
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, edx
        public_6352449 : nop
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        inc ebp
        and ebp, edi
        mov ebx, dword ptr ds : [edx+ebp*8+4]
        test ebx, ebx
        lea eax, ds:[edx+ebp*8]
        jne public_6352422
        public_635245d : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+ebp*8+4], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [edx+ebp*8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63523d0)
    }
}

#undef public_63523f5
#undef public_6352422
#undef public_6352449
#undef public_635245d
