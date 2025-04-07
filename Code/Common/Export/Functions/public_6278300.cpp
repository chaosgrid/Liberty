#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278300);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6278310 _public_6278310
#define public_62783a9 _public_62783a9
#define public_62783b5 _public_62783b5
#define public_62783c1 _public_62783c1
#define public_62783cf _public_62783cf

PROC_DECLARE(0x6278300, internal_6278300, public_6278300);
extern "C" NAKED register_t __cdecl internal_6278300()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        xor ebx, ebx
        lea ecx, ds:[ecx]
        public_6278310 : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_62783b5
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae public_62783b5
        mov esi, dword ptr ds : [ecx+ebx*4]
        cmp esi, edi
        je public_62783a9
        push esi
        call public_6334430
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], edi
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], edi
        mov dword ptr ds : [eax+0x24], edi
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov dword ptr ds : [eax+0x10], edi
        push esi
        mov dword ptr ds : [esi+0x34], 0x420C0000
        mov dword ptr ds : [esi+0x38], 0x3E800000
        mov dword ptr ds : [esi+0x3C], 0x49742400
        call public_6391d5a
        add esp, 8
        public_62783a9 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+ebx*4], edi
        inc ebx
        jmp public_6278310
        public_62783b5 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, edx
        cmp eax, edx
        je public_62783cf
        public_62783c1 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62783c1
        public_62783cf : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6278300)
    }
}

#undef public_6278310
#undef public_62783a9
#undef public_62783b5
#undef public_62783c1
#undef public_62783cf
