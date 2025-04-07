#include "Shading-PCH.h"


#define public_6eb3f29 _public_6eb3f29
#define public_6eb3fbc _public_6eb3fbc
#define public_6eb3fc3 _public_6eb3fc3
#define public_6eb3fda _public_6eb3fda
#define public_6eb3fee _public_6eb3fee

PROC_DECLARE(0x6eb3f10, internal_6eb3f10, public_6eb3f10);
extern "C" NAKED register_t __cdecl internal_6eb3f10()
{
    __asm
    {
        sub esp, 0x34
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6eb3f29
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x34
        ret 8
        public_6eb3f29 : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        xor eax, eax
        mov dword ptr ss : [esp+0x14], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x18]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x28], 0x80000000
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x24], offset public_6ed4374
        mov dword ptr ss : [esp+0x18], 0x34
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6eb3fc3
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x4C]
        push eax
        push 4
        lea ecx, ss:[esp+0x58]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6eb3fee
        cmp dword ptr ss : [esp+0x48], 4
        jne public_6eb3fee
        mov edx, dword ptr ss : [esp+0x4C]
        mov ebx, 1
        mov dword ptr ss : [ebp+8], edx
        public_6eb3fbc : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6eb3fc3 : nop
        xor ecx, ecx
        test ebx, ebx
        setne cl
        dec ecx
        test ecx, 0x80004005
        jge public_6eb3fda
        mov dword ptr ss : [ebp+8], 0xFFFFFFFF
        public_6eb3fda : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 0x34
        ret 8
        public_6eb3fee : nop
        xor ebx, ebx
        jmp public_6eb3fbc
        UNREACHABLE_TRAP(0x6eb3f10)
    }
}

#undef public_6eb3f29
#undef public_6eb3fbc
#undef public_6eb3fc3
#undef public_6eb3fda
#undef public_6eb3fee
