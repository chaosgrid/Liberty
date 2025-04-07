#include "Shading-PCH.h"


#define public_6ec73aa _public_6ec73aa
#define public_6ec73c7 _public_6ec73c7
#define public_6ec7424 _public_6ec7424

PROC_DECLARE(0x6ec7330, internal_6ec7330, public_6ec7330);
extern "C" NAKED register_t __cdecl internal_6ec7330()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        cmp esi, ebx
        setne al
        cmp al, bl
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x18], al
        je public_6ec7424
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        jne public_6ec73aa
        fld dword ptr ds : [public_6ed1284]
        mov dword ptr ss : [esp+0xC], ebx
        fld dword ptr ds : [public_6ed1284]
        fld dword ptr ds : [public_6ed1284]
        jmp public_6ec73c7
        public_6ec73aa : nop
        mov ebx, dword ptr ds : [eax+0xC]
        mov edx, ecx
        shl edx, 4
        fld dword ptr ds : [edx+ebx-0x10]
        lea edx, ds:[edx+ebx-0x10]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0xC], edx
        public_6ec73c7 : nop
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ds:[ecx+ecx*4]
        fld dword ptr ds : [edx+ecx*4+8]
        lea eax, ds:[edx+ecx*4]
        fmul dword ptr ds : [edi+8]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edi+8]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [edi+8]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x18], eax
        mov al, byte ptr ss : [esp+0x18]
        fadd st, st(2)
        fstp dword ptr ds : [esi+8]
        fadd qword ptr ds : [public_6ed2bd8]
        fstp dword ptr ds : [esi]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fadd qword ptr ds : [public_6ed2bd8]
        fstp dword ptr ds : [esi+0x14]
        public_6ec7424 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ec7330)
    }
}

#undef public_6ec73aa
#undef public_6ec73c7
#undef public_6ec7424
